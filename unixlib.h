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

#define COLOUR_RED     "\x1b[0;31m"
#define COLOUR_GREEN   "\x1b[0;32m"
#define COLOUR_YELLOW  "\x1b[0;33m"
#define COLOUR_BLUE    "\x1b[0;34m"
#define COLOUR_MAGENTA "\x1b[0;35m"
#define COLOUR_CYAN    "\x1b[0;36m"
#define COLOUR_RESET   "\x1b[0m"

#define CHAR_NULL     '\0'
#define CHAR_NEWLINE  '\n'

#include  <sys/types.h>

int my_isdigit(const int c);
int my_islower(const int c);
int my_isupper(const int c);
int my_isspace(const int c);

char my_tolower(const char c);
char my_toupper(const char c);

ssize_t my_putc(const char c);
ssize_t my_puts(const char *str);

char my_getc(void);

ssize_t my_errc(const char c);
ssize_t my_errs(const char *str);

ssize_t my_fdputc(const int fd, const char c);
ssize_t my_fdputs(const int fd, const char *str);

ssize_t my_strlen(const char *str);
int my_atoi(const char *str);

#endif
