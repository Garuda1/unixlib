# unixlib

![Branch master](https://img.shields.io/badge/branch-master-brightgreen.svg?style=flat-square)

![Build Status](https://travis-ci.org/Garuda1/unixlib.svg?branch=master)

![License](https://img.shields.io/aur/license/yaourt.svg?maxAge=2592000)

C standard library replacement for UNIX systems created for Hacktoberfest 2016.

This library consists of replacements for simple C standard functions, important data structures, and everyday algorithms. It mainly focuses on getting rid of the error-checking/cross platform features to reduce the functions to small pieces of understandable code which easily fit in one source file. Consider it a syscall abstraction layer that can replace the libc.

The mindset in this project is to get rid of abstraction, focusing on what something is intended to do. As such, any form of object-oriented programming is prohibited. Keep it simple.

For a complete and a detailed documentation, please refer to the [wiki](https://github.com/Garuda1/unixlib/wiki)

# Compilation

Compilation is achieved through the use of GNU Make. A makefile is provided in the root directory.

To compile the library and install it, please input the following commands:

    $ git clone https://github.com/Garuda1/unixlib
    $ cd unixlib
    $ make
    # make install

# Usage and documentation

To use the library, include the required header in your file, and use the `-lunixlib` flag. For a list of the available headers, just browse the `include` folder.

Every function, structure, or global variable from the library is defined in its respective header. Documentation regarding a specific feature can be found in the corresponding source file, as well as the [wiki](https://github.com/Garuda1/unixlib/wiki).

# Contributing

If you want to contribute, then you might want to read the following:

You can compile a GDB-readable binary file, using the `debug` Make target.

    $ make debug

Doing so will not strip out the labels, and will compile using the `-g` flag.

You can also reinstall the library, using the `reinstall` Make target:

    # make reinstall
