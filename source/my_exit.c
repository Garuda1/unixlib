/*
 * my_exit.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1 <garuda1@protonmail.com>
 *
 */

#include <unixlib.h>

/*
 * This function stops execution using
 * the Linux exit syscall.
 *
 * EDIT:
 *   DO NOT USE THIS FUNCTION UNLESS YOU
 *   ARE COMPILING ON ANY OF THOSE SYSTEMS:
 *   - Linux x86
 *   - Linux x86_64
 *   IF YOU ADD SUPPORT FOR ANOTHER PLATFORM,
 *   PLEASE UPDATE THIS LIST ACCORDINGLY.
 */

void my_exit(const char status)
{
  #if __x86_64__
  asm("mov $0x3C, %%rax;"
      "syscall"
      :
      :"D"(status)
  );
  /* ducks out for harambe */
  #else
  asm("mov $0x01, %%al;"
      "int $0x80"
      :
      :"b"(status)
  );
  #endif
}
