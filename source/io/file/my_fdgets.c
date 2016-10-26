/*
 * my_fdgets.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1
 *
 */

#include <unixlib.h>
#include <unixlib-io.h>
#include <unixlib-string.h>
#include <unistd.h>
#include <sys/types.h>

/*
 * This function reads sizeof(str) bytes
 * from the a file descriptor, null terminates
 * the sequence, and returns the number of
 * bytes read.
 *
 */

ssize_t my_fdgets(const int fd, char *str)
{
  ssize_t count;

  count = 0;
  while (count < (ssize_t)sizeof(str) - 1)
  {
    if ((str[count] = my_fdgetc(fd)) == FAILURE)
      return (FAILURE);
    if (my_isspace(str[count]) == TRUE || str[count] == CHAR_NEWLINE)
      return (SUCCESS);
    ++count;
  }
  str[count + 1] = CHAR_NULL;
  return (count);
}
