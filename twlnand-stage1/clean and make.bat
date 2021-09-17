@echo off
make clean
make
python patch_ndsheader_dsiware.py Stage1.nds --mode dsi --maker 01 --code TWLD --title "EVENTIDE-TWL" --out Stage1-DSiWare.nds
make_cia --srl="Stage1-DSiWare.nds"
copy "Stage1-DSiWare.cia" "../7zfile/sdroot/_nds/eventide/cia/Eventide - TWLNAND side.cia"
copy "Stage1-DSiWare.cia" "../Eventide-update/Eventide - TWLNAND side.cia"
python patch_ndsheader_dsiware_twltouch.py Stage1.nds --mode dsi --maker 01 --code TCLD --title "TWLDR-TWLTCH" --out Stage1-DSiWare-TWLTouch.nds
make_cia --srl="Stage1-DSiWare-TWLTouch.nds"
copy "Stage1-DSiWare-TWLTouch.cia" "../7zfile/sdroot/_nds/eventide/cia/Eventide - TWLNAND side (part 1.1).cia"
copy "Stage1-DSiWare-TWLTouch.cia" "../Eventide-update/Eventide - TWLNAND side (part 1.1).cia"
pause