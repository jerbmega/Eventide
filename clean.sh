#!/bin/bash
cd twlnand-stage1
make clean
cd ..
cd twlnand-stage2
make clean
cd ../flashcard-side
make clean
cd ../flashcard-softreset
make clean
cd ../NTR_Launcher
make clean
cd ../gui
make clean
cd ..
rm -r "7zfile"
