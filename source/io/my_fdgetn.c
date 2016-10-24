/*
 * my_fdgetn.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1 <garuda1@protonmail.com>
 *
 */

#include <unixlib-io.h>
#include <unixlib.h>

/*
 * this function parses a 32 bits integer
 * from a file descriptor and returns it.
 *
 */

int my_fdgetn(const int fd)
{
  char buf[12]; /* Maximum number of characters a 32 bits integer can use */

  my_fdgets(fd, buf);
  return (my_atoi(buf));
}
