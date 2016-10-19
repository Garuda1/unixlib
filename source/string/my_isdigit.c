/*
 * my_isdigit.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Rodrigo González López (SametSisartenep)
 *
 */

/*
 * This function takes a character as argument and returns true (1) if it's
 * a number or false (0) otherwise.
 *
 */

#include  <unixlib.h>

int my_isdigit(const int c)
{
  return (((unsigned)c-'0' < 10) ? TRUE : FALSE);
}
