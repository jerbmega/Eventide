#ifndef TRADITIONAL_CHINESE_H
#define TRADITIONAL_CHINESE_H

#include <3ds/types.h>

// TRADITIONAL CHINESE
static const char *const lang_TRCH[STR_MAX] = {

	/** DS/DSi boot screen **/
	"",
	"",
	"",
	"",
	"",
	"www.iQue.com/service/",									// "www.nintendo.com/healthsafety/"
	"",
	"",
	
	"",
	
	/** GUI **/
	": 返回主畫面",													// "Return to HOME Menu"
	"啟動",														// "START" (used on cartridge indicator)
	"沒有卡帶",													// "No cartridge"
	"未知的卡帶", 													// "Unknown Cartridge"
	"設置",														// "Settings"
	": 返回",													// "B: Back"	
	": Add Games",												// "Y: Add Games"

	/** Settings: GUI **/
	"語言",														// "Language"
	"主題",														// "Theme"
	"顏色",														// "Color"
	"選單顏色",													// "Menu Color"
	"顯示檔案名稱",													// "Show filename"
	"遊戲計數器",													// "Game counter"
	"自訂下層圖案",													// "Custom bottom image"
	"自動更新到最新的 Eventide",										// "Auto-update Eventide"
	"Eventide filetype",										// "Eventide filetype"
	"更新 Eventide",												// "Update Eventide"
	"DS/DSi 啟動畫面",												// "DS/DSi Boot Screen"
	"健康與安全信息",												// "Health and Safety message"
	"Show 啟動畫面",												// "Show Boot Screen"
	"ROM path",													// "ROM path"
	"Quick start",												// "Quick start"

	/** Settings: NTR_mode **/
	"選擇燒錄卡",													// "Flashcard(s) select"
	"Notification LED color",									// "Notification LED color"
	"ARM9 CPU 速度",												// "ARM9 CPU Speed"
	"Sound/Microphone frequency",								// "Sound/Microphone frequency"
	"SD card access for Slot-1",								// "SD card access for Slot-1"
	"重置 Slot-1",												// "Reset Slot-1"
	"Bootstrap loading screen",									// "Bootstrap loading screen"
	"控制台輸出",													// "Console output"
	"自動更新 bootstrap",											// "Auto-update bootstrap"
	"Bootstrap",												// "Bootstrap"

	/** Settings: Top Screen **/
	": 更新 bootstrap (官方釋出版本)",								// "X: Update bootstrap (Official release)"
	": 更新 bootstrap (非官方釋出版本)",							// "Y: Update bootstrap (Unofficial release)"

	/** Settings: GUI values **/

	// Color
	"灰色",														// "Gray"
	"棕色",														// "Brown"
	"紅色",														// "Red"
	"粉紅",												 		// "Pink"
	"橘色",														// "Orange"
	"黃色",														// "Yellow"
	"黃綠色",														// "Yellow-Green"
	"綠色 1",													// "Green 1"
	"綠色 2",													// "Green 2"
	"淺綠",														// "Light green"
	"天空藍",														// "Sky blue"
	"淺藍",														// "Light blue"
	"藍色",														// "Blue"
	"紫羅蘭色",													// "Violet"
	"紫色",														// "Purple"
	"紫紅色",														// "Fuchsia"
	"紅&藍",														// "Red and blue"
	"綠&黃",														// "Green and yellow"
	"聖誕",														// "Christmas"

	// Menu Color
	"白色",														// "White"
	"灰色-黑色",													// "Gray-Black"

	/** Settings: GUI descriptions **/
	"介面上所使用的語言,",											// "The language to use for the UI,"
	"包含遊戲橫幅上的文字.",											// "including game banner text."

	"Eventide所使用的主題.",										// "The theme to use in Eventide."
	"點擊 START 來使用副主題.",											// "Press START for sub-themes."

	"上面背景的顏色,",												// "The color of the top background,"
	"START 的邊緣以及小圓點.",										// "the START border, and the circling dots."

	"上面邊緣的顏色,",												// "The color of the top border,"
	"以及下面的背景.",												// "and the bottom background."

	"在泡泡的上端顯示檔案名稱.",										// "Shows game filename at the top of the bubble."
	"",															// (empty)

	"選定以及列出的遊戲數量",											// "A number of selected game and listed games"
	"會顯示在遊戲泡泡之下.",											// "is shown below the text bubble."

	"選定一個你喜歡的圖像",											// "Loads a custom bottom screen image"
	"給遊戲選單使用.",												// "for the game menu."

	"啟動時自動下載最新版本的",										// "Auto-download the CIA of the latest"
	"Eventide CIA.",											// "Eventide version at launch."

	"Where do you want to see the",								// "Where do you want to see the"
	"DS/DSi boot screen?",										// "DS/DSi boot screen?"

	"On startup, WiFi features and",							// "On startup, WiFi features and"
	"banner caching will be skipped.",							// "banner caching will be skipped."

	/** Settings: NTR/TWL_mode descriptions **/
	"選擇一個要使用來運行",											// "Pick a flashcard to use to"
	"遊戲 ROMs 的燒錄卡.",											// "run ROMs from it."

	"提示 LED會閃爍出",												// "See rainbow colors glowing in"
	"如彩虹般的光.",												// "the Notification LED."

	"設定到 TWL 來避免某些遊戲中的拖慢.",								// "Set to TWL to get rid of lags in some games."
	"",															// (empty)

	"32.73 kHz: Original quality",								// "32.73 kHz: Original quality"
	"47.61 kHz: High quality",									// "47.61 kHz: High quality"

	// "允許 8 bit VRAM 寫入",										// "Allows 8 bit VRAM writes"
	// "以及拓展 bus 到 32 bit.",										// "and expands the bus to 32 bit."

	"Enables SD card access for",								// "Enables SD card access for"
	"Slot-1 cards.",											// "Slot-1 cards."

	"運行遊戲之前顯示",												// "Displays the DS/DSi boot animation"
	" DS/DSi 開機動畫.",											// "before launched game."

	"在下面螢幕顯示",												// "Displays the Health and Safety"
	"健康與安全信息.",												// "message on the bottom screen."

	"如果 Slot-1 卡帶卡在白畫面的話",									// "Enable this if Slot-1 carts are stuck"
	"請啟動這項.",													// "on white screens."

	"Shows a loading screen before ROM",						// "Shows a loading screen before ROM"
	"is started in nds-bootstrap.",								// "is started in nds-bootstrap."

	"顯示遊戲之前顯示一些文本.",										// "Displays some text before launched game."
	"",															// (empty)

	// "鎖定 ARM9 SCFG_EXT,",										// "Locks the ARM9 SCFG_EXT,"
	// "避免與當前的 libnds 衝突.",										// "avoiding conflict with recent libnds."

	"啟動時自動更新 nds-bootstrap.",								// "Auto-update nds-bootstrap at launch."
	"",															// (empty)

	"在官方與非官方的",												// "Change between release and"
	"bootstrap 檔案之間切換.",										// "unofficial bootstrap file."

	/** Start menu **/
	// Options
	"遊戲位置",													// "Game location"
	"遊戲圖示: 開",												// "Box Art: On"
	"遊戲圖示: 關",												// "Box Art: OFF"
	"Select ROM type",											// "Select ROM type"
	"上邊緣: 開",													// "Top border: On"
	"上邊緣: 關",													// "Top border: Off"
	"取消 donor rom",											// "Unset donor rom"
	"搜尋",														// "Search"
	// Values
	"SD 卡",														// "SD Card"
	"燒錄卡",														// "Flashcard"
	"使用鍵盤選找 roms",											// "Use the keyboard to find roms"

	/** Select ROM type **/
	"啟動 GBARunner2",											// "Start GBARunner2"

	/** Select menu **/
	// Options
	"ARM9 CPU 速度",												// "ARM9 CPU Speed"
	"SD access",												// "SD access"
	"Use set donor ROM",										// "Use set donor ROM"
	"設置為 donor ROM",											// "Set as donor ROM"
	"設定 LED 顏色",												// "Set LED color"
	// Values
	"預設值",														// "Default"

	/** Sub-theme **/
	"副主題選取: DSi 選單",											// "Sub-theme select: DSi Menu"
	"副主題選取: R4",												// "Sub-theme select: R4"
	"副主題選取: akMenu/Wood",										// "Sub-theme select: Wood"

	"這個主題並無相應的副主題.",											// "No sub-themes exist for this theme."

	/** Settings others minor strings **/
	"/: 儲存並返回",												// "A/B: Save and Return"
	"左/右: 選取",													// "Left/Right: Pick"
	"設置: GUI",													// "Settings: GUI"
	"設置: NTR mode",												// "Settings: NTR mode"

};


#endif /* TRADITIONAL_CHINESE_H */