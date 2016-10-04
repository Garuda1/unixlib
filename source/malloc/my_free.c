/*
 * my_free.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1 <garuda1@protonmail.com>
 *
 */

#include <unistd.h>
#include <sys/types.h>
#include <unixlib.h>

/*
 * This function frees a provided pointer
 *
 */

void my_free(const void *ptr)
{
  t_memchunk *chunk;

  if ((ptr == MY_NULL) || (ptr < my_malloc_start()) || (ptr > sbrk(0)))
    return;
  chunk = (t_memchunk*) ptr - 1; /* Might be improved */
  if ((chunk -> data) != ptr)
    return;
  chunk -> is_free = 1;
  if ((chunk -> next != MY_NULL) && (chunk -> next -> is_free == 1))
    my_malloc_mergechunk(chunk);
  if (chunk -> prev -> is_free == 1)
  {
    chunk = chunk -> prev;
    my_malloc_mergechunk(chunk);
  }
  if (chunk -> next == MY_NULL)
  {
    chunk -> prev -> next = MY_NULL;
    sbrk(-(chunk -> size) - sizeof(t_memchunk));
  }
}
