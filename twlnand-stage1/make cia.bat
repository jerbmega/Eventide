@echo off
make_cia --srl="Stage1-DSiWare.nds"
copy "Stage1-DSiWare.cia" "../7zfile/sdroot/_nds/eventide/cia/Eventide - TWLNAND side.cia"
copy "Stage1-DSiWare.cia" "../Eventide-update/Eventide - TWLNAND side.cia"
make_cia --srl="Stage1-DSiWare-TWLTouch.nds"
copy "Stage1-DSiWare-TWLTouch.cia" "../7zfile/sdroot/_nds/eventide/cia/Eventide - TWLNAND side (part 1.1).cia"
copy "Stage1-DSiWare-TWLTouch.cia" "../Eventide-update/Eventide - TWLNAND side (part 1.1).cia"
pause