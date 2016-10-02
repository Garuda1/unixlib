/*
 * my_islower.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1
 *
 */

#include <unixlib.h>

/*
 * This function returns SUCCESS if
 * the argument is a lower case
 * ASCII character, and FAILURE if
 * not.
 *
 */

int my_islower(const int c)
{
  return (((c > 96) && (c < 123)) ? SUCCESS : FAILURE);
}
