@echo off
make clean
make
copy "flashcard-side.nds" "../7zfile/flashcardsdroot (all)/_nds/eventide.nds"
copy "flashcard-side.nds" "../Eventide-update/eventide.nds"
pause