@echo off
make clean
make
make_cia --srl="NTR_Launcher.nds"
copy "NTR_Launcher.cia" "../7zfile/sdroot/_nds/eventide/cia/Eventide - NTR Launcher.cia"
pause