# Eventide[![Build Status](https://travis-ci.org/Robz8/Eventide.svg?branch=master)](https://travis-ci.org/Robz8/Eventide)

Eventide is a CTR-mode frontend for nds-bootstrap. Forked from TWLoader, Eventide aims to be an alternative to TWiLight Menu++.

# Why?

Over the years, as TWiLight Menu++ has evolved, the launcher has become more and more powerful- in my opinion, to a fault. While TWiLight Menu++ is great for flashcards (I run it on my AK2i, even) and DSi systems, I do not believe it is an optimal solution for 3DS users at this point. TWLoader more focused, and I liked that about it.

The straw that broke the camel's back was when I was attempting to get widescreen patching working on a per-game basis reliably. While it *does* function in TWiLight Menu++, it has a tendency to lock itself into widescreen mode permanently until the sysmodule is manually renamed and moved back into the TWiLight Menu++ directory. Plus, the potential speed benefits of launching a rom straight from TWL_FIRM are negated, as the system has to reboot back into TWL_FIRM anyways. I tried finding alternatives to TWiLight Menu++, only to find that there aren't any, and I was tired of waiting for somebody else to make their own frontend.

# Usage / FAQ

**Please, read the _[wiki](https://github.com/Robz8/Eventide/wiki)_ before asking a question**

# Building

Building this app by yourself require `DevKitARM` with `DevKitPro` .You will also need BernardoGiordano's `pp2d` (included as submodule) and `citro3ds` (included in DevKitPro). You also need makerom on your DevKitPro environment.

For using `compile.bat` you must `git clone --recursive https://github.com/Robz8/Eventide.git` this repository.

# Credits

- ahezard: [nds-bootstrap](https://github.com/ahezard/nds-bootstrap)
- Apache Thunder: NTR-Launcher code, and the recreation of the DS/DSi boot screens.
- billy-acuna: Old Eventide logo.
- Joom: New and current Eventide logo.
- MarcusD: Rainbow colors in Notification LED code.
- shutterbug2000: File browsing code.
- spinal_cord: DSi4DS assets.