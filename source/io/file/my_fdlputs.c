/*
 * my_fdlputs.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Thomas Murgia <garuda1@protonmail.com>
 *
 */

#include <unixlib.h>
#include <unixlib-io.h>
#include <sys/types.h>
#include <stdarg.h>

/*
 * Prints nb strings provided as arguments
 * to the provided file descriptor
 *
 */

ssize_t my_fdlputs(const int fd, const size_t nb, ...)
{
  va_list args;
  ssize_t count;
  char *temp_str;
  int temp_count;
  size_t i;

  va_start(args, nb);
  count = 0;
  i = 0;
  while (i++ < nb)
  {
    temp_str = va_arg(args, char*);
    if ((temp_count = my_fdputs(fd, temp_str)) == FAILURE)
      return (FAILURE);
    count += temp_count;
  }
  va_end(args);
  return (count);
}
