@echo off
make clean
make -j8 COMPILE_3DSX=0
copy "Eventide.cia" "../Eventide-update/Eventide.cia"
copy "Eventide.cia" "../7zfile/sdroot/_nds/eventide/cia/Eventide.cia"
copy "Eventide.3dsx" "../7zfile/sdroot/3ds/Eventide/Eventide.3dsx"
copy "Eventide.3dsx" "../Eventide-update/Eventide.3dsx"
copy "Eventide.smdh" "../7zfile/sdroot/3ds/Eventide/Eventide.smdh"
copy "Eventide.smdh" "../Eventide-update/Eventide.smdh"
pause
