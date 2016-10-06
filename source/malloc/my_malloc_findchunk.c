/*
 * my_malloc_findchunk.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1 <garuda1@protonmail.com>
 *
 */

#include <unixlib.h>
#include <sys/types.h>

/*
 * This function is a part of the malloc
 * family. It looks for a chunk large enough
 * to use instead of allocating more memory.
 *
 */

t_memchunk *my_malloc_findchunk(const size_t size, t_memchunk **heap_ptr)
{
  t_memchunk *chunk;

  chunk = my_malloc_start();
  while ((chunk != MY_NULL) && ((chunk -> is_free == 0) || (chunk -> size < size)))
  {
    *heap_ptr = chunk;
    chunk = chunk -> next;
  }
  return (chunk);
}
