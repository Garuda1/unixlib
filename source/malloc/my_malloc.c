/*
 * my_malloc.c
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
 * allocated portion.
 *
 */

void *my_malloc(const size_t size)
{
  t_memchunk *prev;
  t_memchunk *chunk;
  t_memchunk *new_chunk;
  size_t length;

  if (size == 0)
    return (MY_NULL);
  length = my_malloc_align(size + sizeof(t_memchunk));
  prev = MY_NULL;
  chunk = my_malloc_findchunk(size, &prev);
  if (chunk == MY_NULL)
  {
    new_chunk = sbrk(length);
    if (new_chunk == (void*) -1) /* Honestly, it shouldn't happen really often */
      return (MY_NULL);
    new_chunk -> next = MY_NULL;
    new_chunk -> prev = prev;
    new_chunk -> size = length - sizeof(t_memchunk);
    prev -> next = new_chunk;
    chunk = new_chunk;
  }
  else if (length + sizeof(size_t) < (chunk -> size))
    my_malloc_splitnextchunk(chunk, length);
  chunk -> is_free = 0;
  return (chunk -> data);
}
