/*
 * unixlib-io.h
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Thomas Murgia <garuda1@protonmail.com>
 *
 */

#ifndef _UNIXLIB_IO_H
#define _UNIXLIB_IO_H

/* Terminal colour */
#define COLOUR_RED     "\x1b[0;31m"
#define COLOUR_GREEN   "\x1b[0;32m"
#define COLOUR_YELLOW  "\x1b[0;33m"
#define COLOUR_BLUE    "\x1b[0;34m"
#define COLOUR_MAGENTA "\x1b[0;35m"
#define COLOUR_CYAN    "\x1b[0;36m"
#define COLOUR_RESET   "\x1b[0m"

/* my_openfd modes */
#define OPEN_WRITE 1
#define OPEN_READ  2

/* File paths */
#define RAND_PATH "/dev/urandom"
#define NULL_PATH "/dev/null"

/* File descriptor manipulation */
int my_openfd(const char *path, const int mode);
int my_closefd(const int fd);

/* Input/Output (other file descriptor) */
ssize_t my_fdputc(const int fd, const char c);
ssize_t my_fdputs(const int fd, const char *str);
void my_fdputn(const int fd, const int n);
char my_fdgetc(const int fd);
ssize_t my_fdgets(const int fd, char *str);

/* Input/Output (stdout) */
ssize_t my_putc(const char c);
ssize_t my_puts(const char *str);
void my_putn(const int n);
char my_getc(void);
ssize_t my_gets(char *str);

/* Input/Output (stderr) */
ssize_t my_errc(const char c);
ssize_t my_errs(const char *str);
void my_errn(const int n);

#endif /* #ifndef _UNIXLIB_IO_H */
