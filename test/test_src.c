/*
 * test_src.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1 <garuda1@protonmail.com>
 *
 */

#include "unixlib.h"
#include <stdio.h>
#include <stdlib.h>

int test_constant(const char *name, const int def, const int val)
{
  if (def == val)
  {
    printf("%s (%d): \x1b[0;32m%d\x1b[0m\n", name, def, val);
    return (0);
  }
  printf("%s (%d): \x1b[0;31m%d\x1b[0m\n", name, def, val);
  return (-1);
}

int main(int argc, char **argv)
{
  void *ptr;

  puts("=> Testing constants:\n"
       "Format: [NAME] [CORRECT VALUE]: [ACTUAL VALUE]");
  if (
  test_constant("MY_NULL", 0, MY_NULL) ||
  test_constant("STDIN_FD", 0, STDIN_FD) ||
  test_constant("STDOUT_FD", 1, STDOUT_FD) ||
  test_constant("STDERR_FD", 2, STDERR_FD) ||
  test_constant("FALSE", 0, FALSE) ||
  test_constant("TRUE", 1, TRUE) ||
  test_constant("OPEN_WRITE", 1, OPEN_WRITE) ||
  test_constant("OPEN_READ", 2, OPEN_READ) ||
  test_constant("SUCCESS", 0, SUCCESS) ||
  test_constant("FAILURE", -1, FAILURE) ||
  test_constant("CHAR_NULL", '\0', CHAR_NULL) ||
  test_constant("CHAR_NEWLINE", '\n', CHAR_NEWLINE) ||
  test_constant("CHAR_TAB", '\t', CHAR_TAB) ||
  test_constant("CHAR_SPACE", ' ', CHAR_SPACE))
  {
    puts("\x1b[0;31mFAILURE:\x1b[0m Constant test failure");
    return (EXIT_FAILURE);
  }

  puts("\n\n"
       "=> Testing memory allocation...");
  if ((ptr = malloc(128)) == MY_NULL)
  {
    puts("\x1b[0;31mFAILURE:\x1b[0m Memory allocation failed");
    return (EXIT_FAILURE);
  }
  free(ptr);
  puts("\x1b[0;32mSUCCESS\x1b[0m\n");

  puts("\n\n"
       "=> Testing checking functions");
  if (
  test_constant("my_isdigit", 1, my_isdigit('0')) ||
  test_constant("my_isdigit", 1, my_isdigit('1')) ||
  test_constant("my_isdigit", 1, my_isdigit('2')) ||
  test_constant("my_isdigit", 1, my_isdigit('3')) ||
  test_constant("my_isdigit", 1, my_isdigit('4')) ||
  test_constant("my_isdigit", 1, my_isdigit('5')) ||
  test_constant("my_isdigit", 1, my_isdigit('6')) ||
  test_constant("my_isdigit", 1, my_isdigit('7')) ||
  test_constant("my_isdigit", 1, my_isdigit('8')) ||
  test_constant("my_isdigit", 1, my_isdigit('9')) ||
  test_constant("my_islower", 1, my_islower('c')) ||
  test_constant("my_islower", 1, my_islower('a')) ||
  test_constant("my_islower", 1, my_islower('b')) ||
  test_constant("my_islower", 1, my_islower('d')) ||
  test_constant("my_islower", 1, my_islower('e')) ||
  test_constant("my_islower", 1, my_islower('f')) ||
  test_constant("my_islower", 1, my_islower('g')) ||
  test_constant("my_islower", 1, my_islower('h')) ||
  test_constant("my_islower", 1, my_islower('i')) ||
  test_constant("my_islower", 1, my_islower('j')) ||
  test_constant("my_islower", 1, my_islower('k')) ||
  test_constant("my_islower", 1, my_islower('l')) ||
  test_constant("my_islower", 1, my_islower('m')) ||
  test_constant("my_islower", 1, my_islower('n')) ||
  test_constant("my_islower", 1, my_islower('o')) ||
  test_constant("my_islower", 1, my_islower('p')) ||
  test_constant("my_islower", 1, my_islower('q')) ||
  test_constant("my_islower", 1, my_islower('r')) ||
  test_constant("my_islower", 1, my_islower('s')) ||
  test_constant("my_islower", 1, my_islower('t')) ||
  test_constant("my_islower", 1, my_islower('u')) ||
  test_constant("my_islower", 1, my_islower('v')) ||
  test_constant("my_islower", 1, my_islower('w')) ||
  test_constant("my_islower", 1, my_islower('x')) ||
  test_constant("my_islower", 1, my_islower('y')) ||
  test_constant("my_islower", 1, my_islower('z')) ||
  test_constant("my_isupper", 1, my_isupper('A')) ||
  test_constant("my_isupper", 1, my_isupper('B')) ||
  test_constant("my_isupper", 1, my_isupper('C')) ||
  test_constant("my_isupper", 1, my_isupper('D')) ||
  test_constant("my_isupper", 1, my_isupper('E')) ||
  test_constant("my_isupper", 1, my_isupper('F')) ||
  test_constant("my_isupper", 1, my_isupper('G')) ||
  test_constant("my_isupper", 1, my_isupper('H')) ||
  test_constant("my_isupper", 1, my_isupper('I')) ||
  test_constant("my_isupper", 1, my_isupper('J')) ||
  test_constant("my_isupper", 1, my_isupper('K')) ||
  test_constant("my_isupper", 1, my_isupper('L')) ||
  test_constant("my_isupper", 1, my_isupper('M')) ||
  test_constant("my_isupper", 1, my_isupper('N')) ||
  test_constant("my_isupper", 1, my_isupper('O')) ||
  test_constant("my_isupper", 1, my_isupper('P')) ||
  test_constant("my_isupper", 1, my_isupper('Q')) ||
  test_constant("my_isupper", 1, my_isupper('R')) ||
  test_constant("my_isupper", 1, my_isupper('S')) ||
  test_constant("my_isupper", 1, my_isupper('T')) ||
  test_constant("my_isupper", 1, my_isupper('U')) ||
  test_constant("my_isupper", 1, my_isupper('V')) ||
  test_constant("my_isupper", 1, my_isupper('W')) ||
  test_constant("my_isupper", 1, my_isupper('X')) ||
  test_constant("my_isupper", 1, my_isupper('Y')) ||
  test_constant("my_isupper", 1, my_isupper('Z')) ||
  test_constant("my_isspace", 1, my_isspace(' ')) ||
  test_constant("my_isspace", 1, my_isspace('\n')) ||
  test_constant("my_isspace", 1, my_isspace('\t')))
  {
    puts("\x1b[0;31mFAILURE:\x1b[0m Function test failure");
    return (EXIT_FAILURE);
  }

  puts("\n\n"
       "=> Testing other functions");
  if (
  test_constant("my_strlen", 6, my_strlen("Potato")) ||
  test_constant("my_atoi", 65536, my_atoi("65536")))
  {
    puts("\x1b[0;31mFAILURE:\x1b[0m Function test failure");
    return (EXIT_FAILURE);
  }

  puts("\nThe library seems to work correctly!");
  return (EXIT_SUCCESS);
}
