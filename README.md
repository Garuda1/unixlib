# unixlib
UNIX C standard library replacement created for Hacktoberfest

This library consists of replacement for simple everyday C standard functions. It mainly focuses on getting rid of the error-checking/cross platform features to reduce the functions to small pieces of understandable code which easily fit in one source file.

While most of the functions look like exact copies in how they work of the standard functions, they are not and the programming mindset in this project is to simply provide a lightweight library which does what you want it to. No abstraction.

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

The compiled lib will be accessible as `unixlib.a`. This can be changed in the Makefile. Its header, unixlib.h, is available in the root directory.

# Documentation

Every function from the library is defined in `unixlib.h`. Further informations about the function are available in its corresponding source file (e.g. `atoi` in `source/atoi.c`).
