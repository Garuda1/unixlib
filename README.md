# unixlib

[![Build Status](https://travis-ci.org/Garuda1/unixlib.svg?branch=master)](https://travis-ci.org/Garuda1/unixlib)

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

The compiled lib will be accessible as `unixlib.a`. This can be changed in the Makefile. Its header, unixlib.h, is available in the root directory. Just link your object files to `unixlib.a` and include `unixlib.h` in your source files/headers.

# Documentation

Every function, structure, or global variable from the library is defined in `unixlib.h`. Documentation regarding a specific feature can be found in the corresponding source file.
