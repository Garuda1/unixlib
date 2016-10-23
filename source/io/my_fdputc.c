/*
 * my_fdputc.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1 <garuda1@protonmail.com>
 *
 */

#include <unixlib.h>
#include <unixlib-io.h>
#include <unistd.h>
#include <sys/types.h>

/*
 * This functions prints the ASCII-encoded
 * character (c) to the provided file descriptor
 * (fd). It returns SUCCESS on success or
 * FAILURE if it failed.
 *
 */

ssize_t my_fdputc(const int fd, const char c)
{
  return (write(fd, &c, sizeof(char)) == -1 ? FAILURE : SUCCESS);
}
