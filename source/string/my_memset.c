/*
 * my_memset.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - makomi <unixlib@makomi.net>
 *
 */

#include <unixlib.h>

/*
 * Sets the first 'num' bytes of the block of memory pointed to by 'ptr' to the
 * specified 'value' (interpreted as an unsigned char).
 *
 */

void *my_memset(void *ptr, int value, size_t num)
{
  void *ptr_block = ptr;
  size_t ptr_num = 0;      // number of bytes written to 'ptr'

  while (ptr_num < num)
  {
    *(unsigned char *)ptr++ = (unsigned char)value;
    ptr_num++;
  }

  return (ptr_block);
}
