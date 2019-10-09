/*
 * my_realloc.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Softizo
 *
 */

#include <unixlib.h>

/*
 * This function attempts to resize the memory block
 * pointed to by ptr that was previously allocated with
 * a calll to my_malloc() or my_calloc().
 *
 */

void *my_realloc(void *ptr, size_t size)
{
    if(size == 0)
    {
        my_free(ptr);
        return MY_NULL;
    }
    else if(!ptr)
    {
        return my_malloc(size);
    }
    else
    {
        void *new_ptr = my_malloc(size);
        if(new_ptr)
        {
            my_memcpy(new_ptr, ptr, size);
            my_free(ptr);
        }
        return new_ptr;
    }
}