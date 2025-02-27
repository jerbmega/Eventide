#ifndef KOREAN_H
#define KOREAN_H

#include <3ds/types.h>

// KOREAN
static const char *const lang_KO[STR_MAX] = {

	/** DS/DSi boot screen **/
	"",
	"",
	"",
	"",
	"",
	"",
	"www.nintendocaution.co.kr",								// "www.nintendo.com/healthsafety/"
	"",
	
	"",
	
	/** GUI **/
	": 홈 메뉴로 돌아가",												// "Return to HOME Menu"
	"시작",														// "START" (used on cartridge indicator)
	"카트리지가 없습니다.",												// "No cartridge"
	"카트리지가 올바르지 않습니다.", 										// "Unknown Cartridge"
	"설정",														// "Settings"
	": 뒤로",													// "B: Back"	
	": Add Games",												// "Y: Add Games"

	/** Settings: GUI **/
	"언어",														// "Language"
	"테마",														// "Theme"
	"색상",														// "Color"
	"메뉴 색상",													// "Menu Color"
	"파일이름 보기",													// "Show filename"
	"기게임 카운터",													// "Game counter"
	"커스텀 하단 이미지",												// "Custom bottom image"
	"Eventide 자동 업데이트",										// "Auto-update Eventide"
	"Eventide filetype",										// "Eventide filetype"
	"Eventide 업데이트",											// "Update Eventide"
	"DS/DSi 부트 스크린",											// "DS/DSi Boot Screen"
	"안전 및 주의사항 메세지",											// "Health and Safety message"
	"Show Boot Screen",											// "Show Boot Screen"
	"ROM path",													// "ROM path"
	"Quick start",												// "Quick start"

	/** Settings: NTR_mode **/
	"플래시카드 선택",												// "Flashcard(s) select"
	"Notification LED color",									// "Notification LED color"
	"ARM9 CPU 속도",												// "ARM9 CPU Speed"
	"Sound/Microphone frequency",								// "Sound/Microphone frequency"
	"SD card access for Slot-1",								// "SD card access for Slot-1"
	"리셋 슬롯-1",													// "Reset Slot-1"
	"Bootstrap loading screen",									// "Bootstrap loading screen"
	"콘솔 출력",													// "Console output"
	"부트스트랩 자동 업데이트",											// "Auto-update bootstrap"
	"부트스트랩",													// "Bootstrap"

	/** Settings: Top Screen **/
	": 부트스트랩 업데이트 (공식 릴리즈)",									// "X: Update bootstrap (Official release)"
	": 부트스트랩 업데이트 (비공식 릴리즈)",								// "Y: Update bootstrap (Unofficial release)"

	/** Settings: GUI values **/

	// Color
	"회색",														// "Gray"
	"갈색",														// "Brown"
	"빨간색",														// "Red"
	"분홍색",												 		// "Pink"
	"주황색",														// "Orange"
	"노란색",														// "Yellow"
	"초록-노란색",													// "Yellow-Green"
	"초록색 1",													// "Green 1"
	"초록색 2",													// "Green 2"
	"연두색",														// "Light green"
	"하늘색",														// "Sky blue"
	"밝은 파란색",													// "Light blue"
	"파란색",														// "Blue"
	"보라색",														// "Violet"
	"자주색",														// "Purple"
	"진홍색",														// "Fuchsia"
	"빨간색/파란색",													// "Red and blue"
	"초록색/노란색",													// "Green and yellow"
	"크리스마스",													// "Christmas"

	// Menu Color
	"흰색",														// "White"
	"회색-검정색",													// "Gray-Black"

	/** Settings: GUI descriptions **/
	"게임 배너를 포함해 ",												// "The language to use for the UI,"
	"UI에서 사용할 언어",												// "including game banner text."

	"Eventide 테마",												// "The theme to use in Eventide."
	"서브테마를 설정하려면 START 를 누르세요",								// "Press START for sub-themes."

	"위쪽 바탕화면 색상",												// "The color of the top background,"
	"시작 테두리 포함",												// "the START border, and the circling dots."

	"위쪽 테두리 색상",												// "The color of the top border,"
	"아래쪽 바탕화면 색상 포함",											// "and the bottom background."

	"상단 버블메뉴에 게임 파일이름 보이기",									// "Shows game filename at the top of the bubble."
	"",															// (empty)

	"선택한 게임/게임 리스트 갯수",										// "A number of selected game and listed games"
	"는 하단 텍스트 버블에 나옵니다.",										// "is shown below the text bubble."

	"게임 메뉴에",													// "Loads a custom bottom screen image"
	"사용자 설정 스크린 이미지 띄우기.",									// "for the game menu."

	"시작 시",														// "Auto-download the CIA of the latest"
	"Eventide 최신 CIA 자동 다운로드",									// "Eventide version at launch."

	"Where do you want to see the",								// "Where do you want to see the"
	"DS/DSi boot screen?",										// "DS/DSi boot screen?"

	"On startup, WiFi features and",							// "On startup, WiFi features and"
	"banner caching will be skipped.",							// "banner caching will be skipped."

	/** Settings: NTR/TWL_mode descriptions **/
	"ROM 파일이 있는",												// "Pick a flashcard to use to"
	"플래시카드 선택",												// "run ROMs from it."

	"알림 LED에",													// "See rainbow colors glowing in"
	"무지개색 LED 적용",												// "the Notification LED."

	"몇몇 게임에서 렉을 없애기 위해 TWL으로 설정",								// "Set to TWL to get rid of lags in some games."
	"",															// (empty)

	"32.73 kHz: Original quality",								// "32.73 kHz: Original quality"
	"47.61 kHz: High quality",									// "47.61 kHz: High quality"

	// "8 bit VRAM 쓰기 허용",											// "Allows 8 bit VRAM writes"
	// "및 버스 크기 32bit으로 확장",										// "and expands the bus to 32 bit."

	"Enables SD card access for",								// "Enables SD card access for"
	"Slot-1 cards.",											// "Slot-1 cards."

	"게임 시작 전",													// "Displays the DS/DSi boot animation"
	"DS/DSi 부팅애니메이션 보이기",										// "before launched game."

	"안전 및 주의사항 메세지를",											// "Displays the Health and Safety"
	"하단 화면에 출력",												// "message on the bottom screen."

	"Slot-1 carts가 화이트스크린에서 멈추면 ",								// "Enable this if Slot-1 carts are stuck"
	"이 옵션 설정",													// "on white screens."

	"Shows a loading screen before ROM",						// "Shows a loading screen before ROM"
	"is started in nds-bootstrap.",								// "is started in nds-bootstrap."

	"게임구동 전 텍스트 출력",											// "Displays some text before launched game."
	"",															// (empty)

	// "최신 nds 라이브러리와 충돌 회피를 피하기 위해 ",							// "Locks the ARM9 SCFG_EXT,"
	// "ARM9 SCFG_EXT 잠금",											// "avoiding conflict with recent libnds."

	"시작 시 nds-부트스트랩 업데이트",										// "Auto-update nds-bootstrap at launch."
	"",															// (empty)

	"부트스트랩 파일을 ",												// "Change between release and"
	"공식/비공식으로 변경.",											// "unofficial bootstrap file."

	/** Start menu **/
	// Options
	"게임 위치",													// "Game location"
	"박스아트: 켜짐",												// "Box Art: On"
	"박스아트: 꺼짐",												// "Box Art: OFF"
	"Select ROM type",											// "Select ROM type"
	"상단 테두리: 켜짐",												// "Top border: On"
	"상단 테두리: 꺼짐",												// "Top border: Off"
	"donor rom 해제",												// "Unset donor rom"
	"검색",														// "Search"
	// Values
	"SD 카드",													// "SD Card"
	"플래시카드",													// "Flashcard"
	"롬 검색 시 키보드 사용",											// "Use the keyboard to find roms"

	/** Select ROM type **/
	"GBARunner2 구동",											// "Start GBARunner2"

	/** Select menu **/
	// Options
	"ARM9 CPU 속도",												// "ARM9 CPU Speed"
	"SD access",												// "SD access"
	"Use set donor ROM",										// "Use set donor ROM"
	"donor ROM으로 설정",											// "Set as donor ROM"
	"LED 색상",													// "Set LED color"
	// Values
	"기본값",														// "Default"

	/** Sub-theme **/
	"하위 테마 선택: DSi 메뉴",										// "Sub-theme select: DSi Menu"
	"하위 테마 선택: R4",											// "Sub-theme select: R4"
	"하위 테마 선택: akMenu/Wood",									// "Sub-theme select: Wood"

	"하위 테마가 없습니다.",											// "No sub-themes exist for this theme."

	/** Settings others minor strings **/
	"/: 저장 후 되돌아가기",											// "A/B: Save and Return"
	"</>: 선택",													// "Left/Right: Pick"
	"GUI 설정",													// "Settings: GUI"
	"NTR mode 설정",												// "Settings: NTR mode"

};


#endif /* KOREAN_H */