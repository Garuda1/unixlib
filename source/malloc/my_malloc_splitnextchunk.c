/*
 * my_malloc_splitnextchunk.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1 <garuda1@protonmail.com>
 *
 */

#include <unixlib.h>
#include <sys/types.h>

/*
 * This function splits a memory chunk
 * as part of the malloc group of
 * functions. It may require further
 * optimization.
 *
 */

 void my_malloc_splitnextchunk(t_memchunk *chunk, const size_t size)
 {
   t_memchunk *new_chunk;

   new_chunk = (t_memchunk*) ((char*) chunk + size); /* <-- Voodoo s**t right here */
   new_chunk -> prev = chunk;
   new_chunk -> next = chunk -> next;
   new_chunk -> size = (chunk -> size) - size;
   new_chunk -> is_free = 1;
   new_chunk -> data = new_chunk + 1; /* I'M F***ING DONE */

   if (chunk -> next != MY_NULL)
     chunk -> next -> prev = new_chunk;
   chunk -> next = new_chunk;
   chunk -> size = size - sizeof(t_memchunk);
 }
