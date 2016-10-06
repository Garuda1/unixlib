**unixlib** is meant to be a hacktoberfest project. As such, contributing to the project is highly appreciated. However, some rules apply to contribution:

- The source files are located in the `source/` directory.
- All functions shall be declared in the `unixlib.h` header, unless they're static functions.
- A function shall be implemented in a single source file. If it calls other functions, make them static.
- Documentation for the function shall be provided as a multi-line comment in the source file
- The only headers a source file can include are `unistd.h`, `sys/types.h`, `stdint.h`, `unixlib.h`, and `stdarg.h`.
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

- Don't forget however to edit `Makefile` to add your source file to it!
- Keep in mind that the lib is meant to be used on UNIX systems, mainly Linux x86_64. Do not insert inline assembly or other platform-specific code that doesn't match this criteria.
- Keep it simple. Do not add extravagent systems, or over-verbosed algorithms.
- Intense code commenting is recomended, especially in complex parts.
- No, putting an hexdumped jpeg of your cat as a comment is not acceptable.
- Don't use binary / octal / etc. You can only use the decimal and hexadecimal bases.

Happy hacktoberfest :)
