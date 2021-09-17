﻿#ifndef PORTUGUESE_H
#define PORTUGUESE_H

#include <3ds/types.h>

// PORTUGUESE
static const char *const lang_PT[STR_MAX] = {

	/** DS/DSi boot screen **/
	"WARNING - HEALTH AND SAFETY",								// "WARNING - HEALTH AND SAFETY"
	"BEFORE PLAYING, READ THE HEALTH",							// "BEFORE PLAYING, READ THE HEALTH"
	"AND SAFETY PRECAUTIONS BOOKLET",							// "AND SAFETY PRECAUTIONS BOOKLET"
	"FOR IMPORTANT INFORMATION",								// "FOR IMPORTANT INFORMATION"
	"ABOUT YOUR HEALTH AND SAFETY.",							// "ABOUT YOUR HEALTH AND SAFETY."
	"TO GET AN EXTRA COPY FOR YOUR REGION, GO ONLINE AT",		// "TO GET AN EXTRA COPY FOR YOUR REGION, GO ONLINE AT"
	"www.nintendo.com/healthsafety/",							// "www.nintendo.com/healthsafety/"
	"",
	
	"Touch the Touch Screen to continue.",						// "Touch the Touch Screen to continue."

	/** GUI **/
	": Voltar ao Menu HOME",									// "Return to HOME Menu"
	"Abrir",													// "START" (used on cartridge indicator)
	"Sem cartucho",												// "No cartridge"
	"Cartucho desconhecido", 									// "Unknown Cartridge"
	"Definições",												// "Settings"
	"： Voltar",												// "B: Back"
	": Add Games",												// "Y: Add Games"

	/** Settings: GUI **/
	"Língua",													// "Language"
	"Tema",														// "Theme"
	"Cor",														// "Color"
	"Cor do menu",												// "Menu Color"
	"Mostrar nome do ficheiro",									// "Show filename"
	"Contador de jogos",										// "Game counter"
	"Imagem da parte inferior personalizada",					// "Custom bottom image"
	"Actualização automática: Eventide",						// "Auto-update Eventide"
	"Eventide filetype",										// "Eventide filetype"
	"Actualizar Eventide",										// "Update Eventide"
	"Ecrã de Boot DS/DSi",										// "DS/DSi Boot Screen"
	"Mensagem de saúde e segurança",							// "Health and Safety message"
	"Show Boot Screen",											// "Show Boot Screen"
	"ROM path",													// "ROM path"
	"Quick start",												// "Quick start"

	/** Settings: NTR_mode **/
	"Selectionar Flashcard(s)",									// "Flashcard(s) select"
	"Notification LED color",									// "Notification LED color"
	"Velocidade do CPU ARM9",									// "ARM9 CPU Speed"
	"Sound/Microphone frequency",								// "Sound/Microphone frequency"
	"SD card access for Slot-1",								// "SD card access for Slot-1"
	"Reiniciar Slot-1",											// "Reset Slot-1"
	"Bootstrap loading screen",									// "Bootstrap loading screen"
	"Console output",											// "Console output"
	"Actualização automática: Bootstrap",						// "Auto-update bootstrap"
	"Bootstrap",												// "Bootstrap"

	/** Settings: Top Screen **/
	": Actualizar bootstrap (Versão oficial)",					// "X: Update bootstrap (Official release)"
	": Actualizar bootstrap (Versão não-oficial)",				// "Y: Update bootstrap (Unofficial release)"

	/** Settings: GUI values **/

	// Color
	"Cinzento",													// "Gray"
	"Castanho",													// "Brown"
	"Vermelho",													// "Red"
	"Cor-de-rosa",												// "Pink"
	"Laranja",													// "Orange"
	"Amarelo",													// "Yellow"
	"Amarelo-Verde",											// "Yellow-Green"
	"Verde 1",													// "Green 1"
	"Verde 2",													// "Green 2"
	"Verde claro",												// "Light green"
	"Azul céu",													// "Sky blue"
	"Azul claro",												// "Light blue"
	"Azul",														// "Blue"
	"Violeta",													// "Violet"
	"Roxo",														// "Purple"
	"Fuchsia",													// "Fuchsia"
	"Vermelho e azul",											// "Red and blue"
	"Verde and amarelo",										// "Green and yellow"
	"Natal",													// "Christmas"

	// Menu Color
	"Branco",													// "White"
	"Cinzento-Preto",											// "Gray-Black"

	/** Settings: GUI descriptions **/
	"A língua a utilisar para a interface,",					// "The language to use for the UI,"
	"incluindo o texto da imagem do jogo.",						// "including game banner text."

	"O tema a utilisar no Eventide.",							// "The theme to use in Eventide."
	"Carregue em START para sub-temas.",						// "Press START for sub-themes."

	"A cor de fundo do topo,",									// "The color of the top background,"
	"a borda de START, e os pontos circulares.",				// "the START border, and the circling dots."

	"A cor da borda do topo,",									// "The color of the top border,"
	"e o fundo da parte inferior.",								// "and the bottom background."

	"Mostrar o nome do ficheiro do jogo no",					// "Shows game filename at the top of the bubble."
	"topo da bolha.",											// (empty)

	"O número de jogos selectionados e listados",				// "A number of selected game and listed games"
	"aparece por baixo da bolha de texto.",						// "is shown below the text bubble."

	"Carrega uma imagem personalizada para",					// "Loads a custom bottom screen image"
	"a parte inferior do menu do DSi.",							// "for the DSi Menu theme."

	"Download automático da versão mais recente",				// "Auto-download the CIA of the latest"
	"do Eventide durante o lançamento.",						// "Eventide version at launch."

	"Where do you want to see the",								// "Where do you want to see the"
	"DS/DSi boot screen?",										// "DS/DSi boot screen?"

	"On startup, WiFi features and",							// "On startup, WiFi features and"
	"banner caching will be skipped.",							// "banner caching will be skipped."

	/** Settings: NTR/TWL_mode descriptions **/
	"Escolha uma flashcard para iniciar",						// "Pick a flashcard to use to"
	"ROMs.",													// "run ROMs from it."

	"Ver as cores do arco-íris brilhar",						// "See rainbow colors glowing in"
	"como LED de notificação.",									// "the Notification LED."

	"Selecionar como TWL para eliminar o",						// "Set to TWL to get rid of lags in some games."
	"lag em certos jogos.",										// (empty)

	"32.73 kHz: Original quality",								// "32.73 kHz: Original quality"
	"47.61 kHz: High quality",									// "47.61 kHz: High quality"

	// "Permite escritura de 8 bit VRAM",							// "Allows 8 bit VRAM writes"
	// "e expande o bus para 32 bit.",								// "and expands the bus to 32 bit."

	"Enables SD card access for",								// "Enables SD card access for"
	"Slot-1 cards.",											// "Slot-1 cards."

	"Mostrar a animação de boot de DS/DSi",						// "Displays the DS/DSi boot animation"
	"antes do lançamento do jogo.",								// "before launched game."

	"Mostrar a mensagem de saúde e segurança",					// "Displays the Health and Safety"
	"no ecrã inferior.",										// "message on the bottom screen."

	"Activar isto se os cartuchos no Slot-1 estão",				// "Enable this if Slot-1 carts are stuck"
	"bloqueados em ecrãs brancos.",								// "on white screens."

	"Shows a loading screen before ROM",						// "Shows a loading screen before ROM"
	"is started in nds-bootstrap.",								// "is started in nds-bootstrap."

	"Mostra algum texto antes do lançamento do jogo.",			// "Displays some text before launched game."
	"",															// (empty)

	// "Bloquear o ARM9 SCFG_EXT, para evitar",					// "Locks the ARM9 SCFG_EXT,"
	// "conflitos com libnds recentes.",							// "avoiding conflict with recent libnds."

	"Actualizar automáticamente o nds-bootstrap",				// "Auto-update nds-bootstrap at launch."
	"durante o lançamento da aplicação.",						// (empty)

	"Mudar entre bootstrap oficial ou",							// "Change between release and"
	"não-oficial.",												// "unofficial bootstrap file."

	/** Start menu **/
	// Options
	"Localização do jogo",										// "Game location"
	"Capa do jogo: On",											// "Box Art: On"
	"Capa do jogo: Off",										// "Box Art: OFF"
	"Select ROM type",											// "Select ROM type"
	"Borda do topo: Off",										// "Top border: On"
	"Borda do topo: On",										// "Top border: Off"
	"Desactivar ROM donor",										// "Unset donor rom"
	"Procurar",													// "Search"
	// Values
	"Carta SD",													// "SD Card"
	"Flashcard",												// "Flashcard"
	"Utilisar teclado para encontrar roms",						// "Use the keyboard to find roms"

	/** Select ROM type **/
	"Iniciar GBARunner2",										// "Start GBARunner2"

	/** Select menu **/
	// Options
	"Velocidade do CPU ARM9",									// "ARM9 CPU Speed"
	"SD access",												// "SD access"
	"Use set donor ROM",										// "Use set donor ROM"
	"Definir como ROM donor",									// "Set as donor ROM"
	"Definir a cor do LED",										// "Set LED color"
	// Values
	"Valores padrão",											// "Default"

	/** Sub-theme **/
	"Selecionar Sub-tema: Menu DSi",							// "Sub-theme select: DSi Menu"
	"Selecionar Sub-tema: R4",									// "Sub-theme select: R4"
	"Selecionar Sub-tema: akMenu/Madeira",						// "Sub-theme select: Wood"

	"Não existem sub-temas para este tema.",					// "No sub-themes exist for this theme."

	/** Settings others minor strings **/
	"/: Guardar e Voltar",									// "A/B: Save and Return"
	"Esquerda/Direita: Escolher",								// "Left/Right: Pick"
	"Definições: GUI",											// "Settings: GUI"
	"Definições: Modo NTR",										// "Settings: NTR mode"

};


#endif /* PORTUGUESE_H */