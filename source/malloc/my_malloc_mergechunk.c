/*
 * my_malloc_mergechunk.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1 <garuda1@protonmail.com>
 *
 */

#include <sys/types.h>
#include <unixlib.h>

/*
 * This function is used to merge Memory
 * chunks, as part of the malloc family of
 * functions.
 *
 */

void my_malloc_mergechunk(t_memchunk *chunk)
{
  chunk -> size = (chunk -> size) + (chunk -> next -> size) + sizeof(t_memchunk);
  chunk -> next = chunk -> next -> next;
  if (chunk -> next != MY_NULL)
    chunk -> next -> prev = chunk;
}
