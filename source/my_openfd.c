/*
 * my_openfd.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1 <garuda1@protonmail.com>
 *
 */

#include <fcntl.h>
#include <unixlib.h>
#include <unistd.h>

 /*
  * This function returns a file
  * descriptor to the file located
  * at the provided path, or
  * FAILURE on failure.
  *
  * Possible modes:
  * - OPEN_READ (read only)
  * - OPEN_WRITE (write only)
  * - (OPEN_READ | OPEN_WRITE) (read and write)
  */

/* This function is used to convert
 * the mode to the standard constants
 */
static
inline
int to_stdcnst(const int mode)
{
  switch (mode)
  {
    case OPEN_READ:
      return (O_RDONLY);
      break;
    case OPEN_WRITE:
      return (O_WRONLY);
      break;
    case (OPEN_READ | OPEN_WRITE):
      return (O_RDWR);
      break;
    default:
      return (FAILURE);
      break;
  }
}

int my_openfd(const char *path, const int mode)
{
  int fd;

  fd = open(path, to_stdcnst(mode) | O_CREAT);
  return ((fd == - 1) ? FAILURE : fd);
}
