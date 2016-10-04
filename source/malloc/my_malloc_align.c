/*
 * my_malloc_align.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1 <garuda1@protonmail.com>
 *
 */

#include <unixlib.h>
#include <sys/types.h>

/*
 * DON'T EVER TOUCH THIS ONE SINGLE FUNCTION.
 * It alligns data to the size of a word.
 *
 */

size_t malloc_align(const size_t size)
{
  return ((size + (sizeof(size_t) - 1)) & ~(sizeof(size_t) - 1));
}
