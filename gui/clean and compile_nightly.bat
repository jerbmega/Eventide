@echo off
make clean
make -j8 COMPILE_3DSX=0 IS_NIGHTLY=1
rename Eventide.cia Eventide-beta.cia
pause