/*
 * my_strcmp.c
 *
 * Contributors:
 * - Garuda1 <garud1@protonmail.com>
 *
 */

#include <unixlib.h>
#include <unixlib-string.h>

/*
 * This function compares two strings
 * of characters. If they're equal,
 * 0 is returned. An undefined value
 * garuanteed to be different from zero
 * is returned otherwise.
 *
 */

int my_strcmp(const char *s1, const char *s2)
{
  int sum;
  int counter;

  sum = 0;
  counter = 0;
  if (my_strlen(s1) != my_strlen(s2))
    return (1);
  while (s1[counter] != CHAR_NULL)
  {
    sum += s1[counter];
    sum -= s2[counter];
    ++counter;
  }
  return (sum);
}
