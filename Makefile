#---------------------------------------------------------------------------------
# PACKAGE is the directory where final published files will be placed
#---------------------------------------------------------------------------------
PACKAGE		:=	7zfile

#---------------------------------------------------------------------------------
# Goals for Build
#---------------------------------------------------------------------------------
.PHONY: all destdir package fc_booter fc_softreset gui stage1 stage2 slot1launch clean

all: package

package: destdir stage1 stage2 slot1launch fc_booter fc_softreset gui

destdir:
	mkdir -p 7zfile
	mkdir -p "7zfile/flashcardsdroot (all)/_nds"
	mkdir -p "7zfile/sdroot/3ds/Eventide"
	mkdir -p "7zfile/sdroot/3ds/Eventide_demo"
	mkdir -p "7zfile/sdroot/_nds/eventide/loadflashcard"
	mkdir -p "7zfile/sdroot/_nds/eventide/cia"
	cp "Eventide-update/prebuilts/ace_rpg.nds" "7zfile/sdroot/_nds/eventide/loadflashcard/ace_rpg.nds"
	cp "Eventide-update/prebuilts/r4.nds" "7zfile/sdroot/_nds/eventide/loadflashcard/r4.nds"
	cp "Eventide-update/prebuilts/loadcard_dstt.nds" "7zfile/sdroot/_nds/loadcard_dstt.nds"
	cp "Eventide-update/prebuilts/GBARunner2.nds" "7zfile/sdroot/_nds/GBARunner2.nds"
	cp "Eventide-update/prebuilts/GBARunner2_flashcard.nds" "7zfile/flashcardsdroot (all)/GBARunner2.nds"
	cp "Eventide-update/unofficial-bootstrap.nds" "7zfile/sdroot/_nds/unofficial-bootstrap.nds"
	cp "Eventide-update/release-bootstrap.nds" "7zfile/sdroot/_nds/release-bootstrap.nds"

stage1:
	cd "twlnand-stage1" &&	$(MAKE)
	cp "twlnand-stage1/Stage1-DSiWare.cia" "7zfile/sdroot/_nds/eventide/cia/Eventide - TWLNAND side.cia"

stage2:
	cd "twlnand-stage2" && $(MAKE)
	cp "twlnand-stage2/Stage2.nds" "7zfile/sdroot/_nds/eventide/TWLD.twldr"

slot1launch:
	cd NTR_Launcher && $(MAKE)
	cp "NTR_Launcher/NTR_Launcher.nds" "7zfile/sdroot/_nds/eventide/NTR_Launcher.nds"

gui:
	cd gui && $(MAKE) -j8 COMPILE_3DSX=0
	cp "gui/Eventide.cia" "7zfile/sdroot/_nds/eventide/cia/Eventide.cia"
	cp "gui/Eventide.3dsx" "7zfile/sdroot/3ds/Eventide/Eventide.3dsx"
	cp "gui/Eventide.smdh" "7zfile/sdroot/3ds/Eventide/Eventide.smdh"
	cd gui && $(MAKE) clean
	cd gui && $(MAKE) -j8 COMPILE_3DSX=1 3dsx
	cp "gui/Eventide.3dsx" "7zfile/sdroot/3ds/Eventide_demo/Eventide_demo.3dsx"
	cp "gui/Eventide.smdh" "7zfile/sdroot/3ds/Eventide/Eventide_demo.smdh"

fc_booter:
	cd flashcard-side && $(MAKE)
	cp "flashcard-side/flashcard-side.nds" "7zfile/flashcardsdroot (all)/_nds/eventide.nds"

fc_softreset:
	cd flashcard-softreset && $(MAKE)
	cp "flashcard-softreset/flashcard-softreset.nds" "7zfile/flashcardsdroot (all)/SR.TWLDR"

clean:
	rm -rf 7zfile
	cd flashcard-side && $(MAKE) clean
	cd flashcard-softreset && $(MAKE) clean
	cd gui && $(MAKE) clean
	cd NTR_Launcher && $(MAKE) clean
	cd twlnand-stage1 && $(MAKE) clean
	cd twlnand-stage2 && $(MAKE) clean
