/*
 * my_isspace.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Rodrigo González López (SametSisartenep)
 *
 */

/*
 * This function checks for white-space characters. In the "C" and
 * "POSIX" locales, i.e. space, form-feed ('\f'), newline ('\n'),
 * carriage return ('\r'), horizontal tab ('\t') and vertical tab
 * ('\v').
 *
 */

#include  <unixlib.h>

int my_isspace(const int c)
{
  return c == ' ' || (unsigned)c-'\t' < 5;
}
