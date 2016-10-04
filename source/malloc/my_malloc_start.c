/*
 * my_malloc_start.c
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
 * This functions is the "base" of my_malloc.
 * It is really important and shouldn't be
 * modified. Don't worry about it, it works.
 *
 */

 void *malloc_start(void)
 {
   static
   t_memchunk *chunk = MY_NULL;
   if (chunk == MY_NULL)
   {
     chunk = sbrk(my_malloc_align(sizeof(t_memchunk)));
     if (chunk == (void*) -1)
       my_exit(0x7F);
     chunk -> next = MY_NULL;
     chunk -> prev = MY_NULL;
     chunk -> size = 0;
     chunk -> is_free = 0;
     chunk -> data = MY_NULL;
   }
   return (chunk);
 }
