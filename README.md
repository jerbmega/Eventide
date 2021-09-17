# **!!THIS IS UNUSABLE RIGHT NOW!!** 
## Eventide does not compile right now. This disclaimer will be removed once it does.

# Eventide![Build Status(https://github.com/jerbmega/Eventide/actions/workflows/ci.yml/badge.svg)

Eventide is a CTR-mode frontend for nds-bootstrap. Forked from TWLoader, Eventide aims to be an alternative to TWiLight Menu++.

# Why?

Over the years, as TWiLight Menu++ has evolved, the launcher has become more and more powerful- in my opinion, to a fault. While TWiLight Menu++ is great for flashcards (I run it on my AK2i, even) and DSi systems, I do not believe it is an optimal solution for 3DS users at this point. TWLoader more focused, and I liked that about it.

The straw that broke the camel's back was when I was attempting to get widescreen patching working on a per-game basis reliably. While it *does* function in TWiLight Menu++, it has a tendency to lock itself into widescreen mode permanently until the sysmodule is manually renamed and moved back into the TWiLight Menu++ directory. Plus, the potential speed benefits of launching a rom straight from TWL_FIRM are negated, as the system has to reboot back into TWL_FIRM anyways. I tried finding alternatives to TWiLight Menu++, only to find that there aren't any, and I was tired of waiting for somebody else to make their own frontend.

# Usage / FAQ

TODO 

# Building

Install [devkitPRO and devkitARM](https://devkitpro.org/wiki/Getting_Started). You will also need [makerom](https://github.com/3DSGuy/Project_CTR/releases/tag/makerom-v0.17) and [bannertool](https://github.com/Steveice10/bannertool/releases/latest) in your PATH.

On Windows, use `compile.bat`, and on Unix systems, use `compile.sh`. This should work on any *nix that devkitPro supports, but I have only tested on Linux.

