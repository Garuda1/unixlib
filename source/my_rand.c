/*
 * my_atoi.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1 <garuda1@protonmail.com>
 *
 */

#include <sys/types.h>
#include <unixlib.h>
#include <unixlib-io.h>
#include <unistd.h>

/*
 * This function returns sizeof(int)
 * bytes read from RAND_PATH, or 0
 * on error.
 *
 */

/*
 * After lots of successive calls, opening
 * The file descriptor and closing it can
 * lead to severe performance impacts...
 * Maybe this should be fixed
 *
 */

int my_rand(void)
{
  int val;
  int fd;

  fd = my_openfd(RAND_PATH, OPEN_READ);
  if (read(fd, &val, sizeof(int)) == FAILURE)
  {
    close(fd);
    return (0);
  }
  close(fd);
  return (val);
}
