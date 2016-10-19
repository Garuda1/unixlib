**unixlib** is meant to be a hacktoberfest project. As such, contributing to the project is highly appreciated. However, some rules apply to contribution:

- The source files are located in their correponding `source/` directory. You may create additional directories if needed.
- All features shall be declared in the corresponding `headers/?.h` header, unless they're static.
- A function shall be implemented in a single source file. If it calls other functions, make them static, or add a source file for each function.
- Providing documentation for the function as a multi-line comment in the source file is appreciated, but not necessary anymore thanks to the Github wiki.
- You may include any header in the `headers` directory, or any of the POSIX headers (like `sys/types.h`, `unistd.h`, etc.)

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
- Don't forget however to edit the makefile and headers to add your source files!
- Keep in mind that the lib is meant to be used on UNIX systems, mainly Linux x86_64. Do not insert inline assembly or other platform-specific code that doesn't match this criteria.
- Keep it simple. Do not add extravagent systems, or over-verbosed algorithms.
- Intense code commenting is recomended, especially in complex parts.
- No, putting an hexdumped jpeg of your cat as a comment is not acceptable.
- Don't use binary / octal / etc. You can only use the decimal and hexadecimal bases, unless it actually makes understanding easier.
- If a constant is defined in any of the headers, use that constant instead of its value in your code (ex: don't use `'\0'` but `CHAR_NULL`)

Happy hacktoberfest :)
