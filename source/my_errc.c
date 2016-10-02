/*
 * my_errc.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1 <garuda1@protonmail.com>
 *
 */

/*
 * This function prints an ASCII-encoded character to STDERR
 *
 */

#include  <unistd.h>
#include  <unixlib.h>
#include  <sys/types.h>

ssize_t my_errc(const char c)
{
  return ((write(STDERR_FD, &c, sizeof(char)) != -1) ? FAILURE : SUCCESS);
}
