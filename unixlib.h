/*
 * unixlib.h
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1
 *
 */

#ifndef _UNIXLIB_H
#define _UNIXLIB_H

#define STDIN_FD  0
#define STDOUT_FD 1
#define STDERR_FD 2

#define SUCCESS 0
#define FAILURE -1

#define CHAR_NULL     '\0'
#define CHAR_NEWLINE  '\n'

#include  <sys/types.h>

ssize_t my_putc(const char c);
ssize_t my_puts(const char *str);

ssize_t my_errc(const char c);
ssize_t my_errs(const char *str);

ssize_t my_strlen(const char *str);

#endif
