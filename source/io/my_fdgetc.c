/*
 * my_fdgetc.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1 <garuda1@protonmail.com>
 *
 */

#include <unixlib.h>
#include <unixlib-io.h>
#include <unistd.h>

/*
 * Returns sizeof(char) bytes read
 * from a provided file descriptor,
 * or FAILURE on error.
 *
 */

char my_fdgetc(const int fd)
{
  char c;

  return ((read(fd, &c, sizeof(char)) == -1) ? FAILURE : c);
}
