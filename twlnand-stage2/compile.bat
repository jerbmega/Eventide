@echo off
make
copy "Stage2.nds" "../7zfile/sdroot/_nds/eventide/TWLD.twldr"
copy "Stage2.nds" "../Eventide-update/TWLD.twldr"
pause