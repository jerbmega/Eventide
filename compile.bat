@echo off
mkdir "7zfile/flashcardsdroot (all)/_nds"
mkdir "7zfile/sdroot/3ds/Eventide"
mkdir "7zfile/sdroot/3ds/Eventide_demo"
mkdir "7zfile/sdroot/_nds/eventide/loadflashcard"
mkdir "7zfile/sdroot/_nds/eventide/cia"
cd "Eventide-update/prebuilts"
copy "ace_rpg.nds" "../../7zfile/sdroot/_nds/eventide/loadflashcard/ace_rpg.nds"
copy "r4.nds" "../../7zfile/sdroot/_nds/eventide/loadflashcard/r4.nds"
copy "loadcard_dstt.nds" "../../7zfile/sdroot/_nds/loadcard_dstt.nds"
copy "GBARunner2.nds" "../../7zfile/sdroot/_nds/GBARunner2.nds"
copy "GBARunner2_flashcard.nds" "../../7zfile/flashcardsdroot (all)/GBARunner2.nds"
cd ..
copy "unofficial-bootstrap.nds" "../7zfile/sdroot/_nds/unofficial-bootstrap.nds"
copy "release-bootstrap.nds" "../7zfile/sdroot/_nds/release-bootstrap.nds"
cd ..
cd "twlnand-stage1"
make clean
make
python patch_ndsheader_dsiware.py Stage1.nds --mode dsi --maker 01 --code TWLD --title "EVENTIDE-TWL" --out Stage1-DSiWare.nds
make_cia --srl="Stage1-DSiWare.nds"
copy "Stage1-DSiWare.cia" "../7zfile/sdroot/_nds/eventide/cia/Eventide - TWLNAND side.cia"
cd ..
cd "twlnand-stage2"
make clean
make
copy "Stage2.nds" "../7zfile/sdroot/_nds/eventide/TWLD.twldr"
cd ..
cd NTR_Launcher
make clean
make
copy "NTR_Launcher.nds" "../7zfile/sdroot/_nds/eventide/NTR_Launcher.nds"
cd ..
cd gui
make clean
make -j8 COMPILE_3DSX=0
copy "Eventide.cia" "../7zfile/sdroot/_nds/eventide/cia/Eventide.cia"
copy "Eventide.3dsx" "../7zfile/sdroot/3ds/Eventide/Eventide.3dsx"
copy "Eventide.smdh" "../7zfile/sdroot/3ds/Eventide/Eventide.smdh"
make clean
make -j8 COMPILE_3DSX=1 3dsx
copy "Eventide.3dsx" "../7zfile/sdroot/3ds/Eventide_demo/Eventide_demo.3dsx"
copy "Eventide.smdh" "../7zfile/sdroot/3ds/Eventide/Eventide_demo.smdh"
cd ..
cd flashcard-side
make clean
make
copy "flashcard-side.nds" "../7zfile/flashcardsdroot (all)/_nds/eventide.nds"
cd ..
cd flashcard-softreset
make clean
make
copy "flashcard-softreset.nds" "../7zfile/flashcardsdroot (all)/SR.TWLDR"
pause



