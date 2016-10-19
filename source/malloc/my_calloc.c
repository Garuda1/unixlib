/*
 * my_calloc.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1 <garuda1@protonmail.com>
 *
 */

#include <unixlib.h>
#include <unixlib-io.h>
#include <unistd.h>
#include <sys/types.h>

/*
 * This function allocates nmemb elements of size bytes of
 * useable memory from the heap, and
 * returns a pointer to the start of the
 * allocated portion. It also zeroes the
 * allocated memory.
 *
 */

void *my_calloc(const size_t nmemb, const size_t size)
{
  void *ptr;
  int fd;
  ssize_t stat;
  size_t total = size * nmemb;


  if ((ptr = my_malloc(total)) == MY_NULL)
    return (MY_NULL);

  fd = my_openfd(NULL_PATH, OPEN_READ);

  if ((stat = read(fd, ptr, total)) < 0 || stat != ((ssize_t) total) ) {
    my_free(ptr);
    ptr = MY_NULL;
  }

  my_closefd(fd);
  return (ptr);
}
