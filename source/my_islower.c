/*
 * my_islower.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1 <garuda1@protonmail.com>
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
  return (('a' <= c&& c <= 'z') ? TRUE : FALSE);
}
