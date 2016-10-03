/*
 * my_closefd.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1 <garuda1@protonmail.com>
 *
 */

#include <unistd.h>
#include <unixlib.h>

/*
 * Closes the provided file descriptor
 *
 */

void my_closefd(const int fd)
{
  close(fd);
}
