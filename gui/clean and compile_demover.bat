@echo off
make clean
make -j8 COMPILE_3DSX=1 3dsx
copy "Eventide.3dsx" "../7zfile/sdroot/3ds/Eventide_demo/Eventide_demo.3dsx"
copy "Eventide.3dsx" "../Eventide-update/Eventide_demo.3dsx"
copy "Eventide.smdh" "../7zfile/sdroot/3ds/Eventide_demo/Eventide_demo.smdh"
copy "Eventide.smdh" "../Eventide-update/Eventide_demo.smdh"
pause
