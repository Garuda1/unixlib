/*
 * my_getc.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1
 *
 */

#include <unixlib.h>
#include <unistd.h>

/*
 * Returns sizeof(char) bytes read 
 * from the standard input, or FAILURE
 * on error.
 *
 */

char my_getc(void)
{
  char c;

  return ((write(STDIN_FD, &c, sizeof(char)) == -1) ? FAILURE : c);
}
