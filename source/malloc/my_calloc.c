/*
 * my_calloc.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1 <garuda1@protonmail.com>
 *
 */

#include <unixlib.h>
#include <unistd.h>
#include <sys/types.h>

/*
 * This function allocates size bytes of
 * useable memory from the heap, and
 * returns a pointer to the start of the
 * allocated portion. It also zeroes the
 * allocated memory.
 *
 */

void *my_calloc(const size_t size)
{
  void *ptr;
  int fd;
  
  if ((ptr = my_malloc(size)) == MY_NULL)
    return (MY_NULL);
  fd = my_openfd(PATH_NULL, OPEN_READ);
  read(fd, ptr, size);
  my_closefd(fd);
  return (ptr);
}
