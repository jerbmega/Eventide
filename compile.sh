#!/bin/bash
set -e
mkdir -p "7zfile/flashcardsdroot (all)/_nds" "7zfile/sdroot/3ds/Eventide" "7zfile/sdroot/3ds/Eventide_demo" "7zfile/sdroot/_nds/eventide/loadflashcard" "7zfile/sdroot/_nds/eventide/cia"
cd "Eventide-update/prebuilts"
cp "ace_rpg.nds" "../../7zfile/sdroot/_nds/eventide/loadflashcard/ace_rpg.nds"
cp "r4.nds" "../../7zfile/sdroot/_nds/eventide/loadflashcard/r4.nds"
cp "loadcard_dstt.nds" "../../7zfile/sdroot/_nds/loadcard_dstt.nds"
cp "GBARunner2.nds" "../../7zfile/sdroot/_nds/GBARunner2.nds"
cp "GBARunner2_flashcard.nds" "../../7zfile/flashcardsdroot (all)/GBARunner2.nds"
cd ..
cp "unofficial-bootstrap.nds" "../7zfile/sdroot/_nds/unofficial-bootstrap.nds"
cp "release-bootstrap.nds" "../7zfile/sdroot/_nds/release-bootstrap.nds"
cd ..
cd "twlnand-stage1"
make clean
make
python2 patch_ndsheader_dsiware.py Stage1.nds --mode dsi --maker 01 --code TWLD --title "EVENTIDE-TWL" --out Stage1-DSiWare.nds
chmod +x make_cia
./make_cia --srl="Stage1-DSiWare.nds"
cp "Stage1-DSiWare.cia" "../7zfile/sdroot/_nds/eventide/cia/Eventide - TWLNAND side.cia"
cd ..
cd "twlnand-stage2"
make clean
make
cp "Stage2.nds" "../7zfile/sdroot/_nds/eventide/TWLD.twldr"
cd ..
cd NTR_Launcher
make clean
make
cp "NTR_Launcher.nds" "../7zfile/sdroot/_nds/eventide/NTR_Launcher.nds"
cd ..
cd gui
make clean
make -j$(nproc) COMPILE_3DSX=0
cp "Eventide.cia" "../7zfile/sdroot/_nds/eventide/cia/Eventide.cia"
cp "Eventide.3dsx" "../7zfile/sdroot/3ds/Eventide/Eventide.3dsx"
cp "Eventide.smdh" "../7zfile/sdroot/3ds/Eventide/Eventide.smdh"
make clean
make -j$(nproc) COMPILE_3DSX=1 3dsx
cp "Eventide.3dsx" "../7zfile/sdroot/3ds/Eventide_demo/Eventide_demo.3dsx"
cp "Eventide.smdh" "../7zfile/sdroot/3ds/Eventide/Eventide_demo.smdh"
cd ..
cd flashcard-side
make clean
make
cp "flashcard-side.nds" "../7zfile/flashcardsdroot (all)/_nds/eventide.nds"
cd ..
cd flashcard-softreset
make clean
make
cp "flashcard-softreset.nds" "../7zfile/flashcardsdroot (all)/SR.TWLDR"



