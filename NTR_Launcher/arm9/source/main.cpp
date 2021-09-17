/*
    NitroHax -- Cheat tool for the Nintendo DS
    Copyright (C) 2008  Michael "Chishm" Chisholm

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <nds.h>
#include <fat.h>
#include <nds/fifocommon.h>

#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <list>

#include "inifile.h"
#include "nds_card.h"
#include "launch_engine.h"
#include "crc.h"
#include "version.h" 

// #define REG_ROMCTRL		(*(vu32*)0x40001A4)
// #define REG_SCFG_ROM	(*(vu32*)0x4004000)
// #define REG_SCFG_CLK	(*(vu32*)0x4004004)
// #define REG_SCFG_EXT	(*(vu32*)0x4004008)
// #define REG_SCFG_MC		(*(vu32*)0x4004010)


bool consoleOn = false;

int main() {

	bool TWLCLK = true;	// false == NTR, true == TWL
	bool SOUND_FREQ = false;	// false == 32.73 kHz, true == 47.61 kHz
	bool EnableSD = false;
	std::string	gamesettingsPath = "";

	// If slot is powered off, tell Arm7 slot power on is required.
	if(REG_SCFG_MC == 0x11) { fifoSendValue32(FIFO_USER_02, 1); }
	if(REG_SCFG_MC == 0x10) { fifoSendValue32(FIFO_USER_02, 1); }

	u32 ndsHeader[0x80];
	char gameid[4];
	
	if (fatInitDefault()) {
		CIniFile eventideini( "sd:/_nds/eventide/settings.ini" );

		char *p = (char*)PersonalData->name;
		
		// text
		for (int i = 0; i < 10; i++) {
			if (p[i*2] == 0x00)
				p[i*2/2] = 0;
			else
				p[i*2/2] = p[i*2];
		}
		
		// if (logEnabled)	LogFMA("TWL.Main", "Got username", p);
		
		eventideini.SetString("FRONTEND","NAME", p);
		eventideini.SaveIniFile( "sd:/_nds/eventide/settings.ini" );
		// if (logEnabled)	LogFMA("TWL.Main", "Saved username to GUI", p);
		
		gamesettingsPath = eventideini.GetString( "TWL-MODE", "GAMESETTINGS_PATH", "");
		
		if(!access(gamesettingsPath.c_str(), F_OK)) {
			CIniFile gamesettingsini( gamesettingsPath );
			if(gamesettingsini.GetInt("GAME-SETTINGS","TWL_CLOCK",0) == -1) {
				if(eventideini.GetInt("TWL-MODE","TWL_CLOCK",0) == 0) { TWLCLK = false; }
			} else {
				if(gamesettingsini.GetInt("GAME-SETTINGS","TWL_CLOCK",0) == 0) {
					TWLCLK = false;
				}
			}
		} else {
			if(eventideini.GetInt("TWL-MODE","TWL_CLOCK",0) == 0) { TWLCLK = false; }
		}

		if(eventideini.GetInt("TWL-MODE","DEBUG",0) != -1) {
			consoleOn = true;
			consoleDemoInit();
		}

		if( TWLCLK == false ) {
			if(eventideini.GetInt("TWL-MODE","DEBUG",0) == 1) {
				printf("TWL_CLOCK ON\n");		
			}
			fifoSendValue32(FIFO_USER_04, 1);
			// Disabled for now. Doesn't result in correct SCFG_CLK configuration during testing. Will go back to old method.
			// setCpuClock(false);
			REG_SCFG_CLK = 0x80;
			swiWaitForVBlank();
		}

		SOUND_FREQ = eventideini.GetInt("TWL-MODE","SOUND_FREQ",0);
		if(SOUND_FREQ) {
			fifoSendValue32(FIFO_MAXMOD, 1);
			//if (logEnabled)	LogFM("TWL.Main", "Sound/Microphone frequency set to 47.61 kHz");
			if(eventideini.GetInt("TWL-MODE","DEBUG",0) == 1) {
				printf("SOUND_FREQ 47.61 kHz\n");		
			}
		} //else {
			//if (logEnabled)	LogFM("TWL.Main", "Sound/Microphone frequency set to 32.73 kHz");
		//}

		if(eventideini.GetInt("TWL-MODE","SLOT1_ENABLESD",0) == 1) {
			if(eventideini.GetInt("TWL-MODE","DEBUG",0) == 1) {
				printf("SD access ON\n");		
			}
			EnableSD = true;
			// Tell Arm7 to use alternate SCFG_EXT values.
			fifoSendValue32(FIFO_USER_05, 1);
		} else if(eventideini.GetInt("TWL-MODE","FORWARDER",0) == 1) {
			if(eventideini.GetInt("TWL-MODE","DEBUG",0) == 1) {
				printf("SD access ON\n");		
			}
			EnableSD = true;
			// Tell Arm7 to use alternate SCFG_EXT values.
			fifoSendValue32(FIFO_USER_05, 1);
		}

		// if(ntrlauncher_config.GetInt("NTRLAUNCHER","TWLMODE",0) == 1) {
		// 	// Tell Arm7 not to switch into NTR mode (this will only work on alt build of NTR Launcher)
		// 	fifoSendValue32(FIFO_USER_06, 1);
		// }

		if(eventideini.GetInt("TWL-MODE","RESET_SLOT1",0) == 1) {
			fifoSendValue32(FIFO_USER_02, 1);
			fifoSendValue32(FIFO_USER_07, 1);
		}

	} else {
		fifoSendValue32(FIFO_USER_02, 1);
		fifoSendValue32(FIFO_USER_07, 1);
	}

	// Tell Arm7 it's ready for card reset (if card reset is nessecery)
	fifoSendValue32(FIFO_USER_01, 1);
	// Waits for Arm7 to finish card reset (if nessecery)
	fifoWaitValue32(FIFO_USER_03);

	// Wait for card to stablize before continuing
	for (int i = 0; i < 30; i++) { swiWaitForVBlank(); }

	sysSetCardOwner (BUS_OWNER_ARM9);

	getHeader (ndsHeader);

	for (int i = 0; i < 30; i++) { swiWaitForVBlank(); }
	
	memcpy (gameid, ((const char*)ndsHeader) + 12, 4);

	while(1) {
		if(REG_SCFG_MC == 0x11) { 
		break; } else {
			runLaunchEngine (EnableSD);
		}
	}
	return 0;
}

