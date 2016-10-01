*unixlib* is meant to be a hacktoberfest project. As such, contributing to the project is highly appreciated. However, some rules apply to contribution:

- The source files are located in the `source/` directory.
- All functions shall be declared in the `unixlib.h` header, unless they're static functions.
- A function shall be implemented in a single source file. If it calls other functions, make them static.
- Documentation for the function shall be provided as a multi-line comment in the source file
- The only headers a source file can include are "unistd.h", "sys/types.h", "stdint.h" and "unixlib.h"

Happy hacktoberfest :)
