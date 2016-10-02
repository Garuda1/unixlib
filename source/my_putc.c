/*
 * my_putc.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1 <garuda1@protonmail.com>
 *
 */

/*
 * This function prints an ASCII encoded character to the standard output
 *
 */

#include  <unistd.h>
#include  <unixlib.h>
#include  <sys/types.h>

ssize_t my_putc(const char c)
{
  return ((write(STDOUT_FD, &c, sizeof(char)) != -1) ? FAILURE : SUCCESS);
}
