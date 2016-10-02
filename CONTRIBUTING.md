*unixlib* is meant to be a hacktoberfest project. As such, contributing to the project is highly appreciated. However, some rules apply to contribution:

- The source files are located in the `source/` directory.
- All functions shall be declared in the `unixlib.h` header, unless they're static functions.
- A function shall be implemented in a single source file. If it calls other functions, make them static.
- Documentation for the function shall be provided as a multi-line comment in the source file
- The only headers a source file can include are `unistd.h`, `sys/types.h`, `stdint.h` and `unixlib.h`
- Every source file must respect the following format:

  [File header]
  [#incude,#define,etc.]
  [Documentation as multi-line comment]
  [actual code]
  
  The "File header" is:
  
      /*
       * filename.c
       *
       * Licensed under GNU GPL v3
       * Contributors:
         - Your github username, real name, email, whatever your want actually
       *
       */
   
- Forget about coding style, it's Hacktoberfest after all, it's a community project and diversity is welcome.

Happy hacktoberfest :)
