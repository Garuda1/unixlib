# unixlib

![Branch master](https://img.shields.io/badge/branch-master-brightgreen.svg?style=flat-square)
![Build Status](https://travis-ci.org/Garuda1/unixlib.svg?branch=master)
![License](https://img.shields.io/aur/license/yaourt.svg?maxAge=2592000)

C standard library replacement for UNIX systems created for Hacktoberfest 2016.

This library consists of replacements for simple C standard functions, important data structures, and everyday algorithms. It mainly focuses on getting rid of the error-checking/cross platform features to reduce the functions to small pieces of understandable code which easily fit in one source file.

The mindset in this project is to get rid of abstraction, focusing on what something is intended to do. As such, any form of object-oriented programming is prohibited. Keep it simple.

# Compilation

Compilation is achieved through the use of GNU Make. A makefile is provided in the root directory.

To compile the lib, input:

    $ make

To remove the object files only:

    $ make clean

To remove the object and lib files:

    $ make fclean

To recompile everything:

    $ make re

To install the library:

    # make install

# Documentation

To use the library, include `<unixlib.h>` in your file, and use the `-lunixlib` flag.

Every function, structure, or global variable from the library is defined in `unixlib.h`. Documentation regarding a specific feature can be found in the corresponding source file.
