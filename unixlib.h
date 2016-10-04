/*
 * unixlib.h
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1
 * - SametSisartenep
 * - varshit97
 *
 */

#ifndef _UNIXLIB_H
#define _UNIXLIB_H

/* Special values */
#define MY_NULL 0

/* File descriptors */
#define STDIN_FD  0
#define STDOUT_FD 1
#define STDERR_FD 2

/* Boolean values */
#define FALSE 0
#define TRUE  1

/* my_openfd modes */
#define OPEN_WRITE 1
#define OPEN_READ  2

/* Error checking */
#define SUCCESS 0
#define FAILURE (-1)

/* Terminal colour */
#define COLOUR_RED     "\x1b[0;31m"
#define COLOUR_GREEN   "\x1b[0;32m"
#define COLOUR_YELLOW  "\x1b[0;33m"
#define COLOUR_BLUE    "\x1b[0;34m"
#define COLOUR_MAGENTA "\x1b[0;35m"
#define COLOUR_CYAN    "\x1b[0;36m"
#define COLOUR_RESET   "\x1b[0m"

/* Special ASCII characters */
#define CHAR_NULL     '\0'
#define CHAR_NEWLINE  '\n'
#define CHAR_TAB      '\t'
#define CHAR_SPACE    ' '

#include  <sys/types.h>

/* Memory allocation */
void my_free(const void *ptr);
void *my_malloc(const size_t size);
void *my_calloc(const size_t nmemb, const size_t size);

/* Memory allocation (do not use) */
typedef struct s_memchunk t_memchunk;
struct s_memchunk
{
  t_memchunk *next;
  t_memchunk *prev;
  size_t     size;
  int        is_free;
  void       *data;
};

size_t my_malloc_align(const size_t size);
void *my_malloc_start(void);
t_memchunk *my_malloc_findchunk(const size_t size, t_memchunk **heap_ptr);
void my_malloc_mergechunk(t_memchunk *chunk);
void my_malloc_splitnextchunk(t_memchunk *chunk, const size_t size);

/* Character checking functions */
int my_isdigit(const int c);
int my_islower(const int c);
int my_isupper(const int c);
int my_isspace(const int c);

/* Character transformation functions */
char my_tolower(const char c);
char my_toupper(const char c);

/* File descriptor manipulation */
int my_fopenfd(const char *path, const int mode);
void my_closefd(const int fd);

/* Input/Output (stdout) */
ssize_t my_putc(const char c);
ssize_t my_puts(const char *str);
char my_getc(void);

/* Input/Output (stderr) */
ssize_t my_errc(const char c);
ssize_t my_errs(const char *str);

/* Input/Output (other file descriptor) */
ssize_t my_fdputc(const int fd, const char c);
ssize_t my_fdputs(const int fd, const char *str);

/* String manipulation functions */
ssize_t my_strlen(const char *str);

/* Misc functions */
int my_atoi(const char *str);
void *my_memcpy(void *dest, const void *src, const size_t count);
void my_exit(const char status);

#endif
