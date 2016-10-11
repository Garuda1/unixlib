/*
 * unixlib.h
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1
 * - SametSisartenep
 * - varshit97
 * - chriscz
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

/* File paths */
#define RAND_PATH "/dev/urandom"
#define NULL_PATH "/dev/null"

/* Boolean values */
#define FALSE 0
#define TRUE  1

/* my_openfd modes */
#define OPEN_WRITE 1
#define OPEN_READ  2

/* Error checking */
#define SUCCESS 0
#define FAILURE -1

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
int my_openfd(const char *path, const int mode);
int my_closefd(const int fd);

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

/* Input/Output (other file descriptor) */
ssize_t my_fdputc(const int fd, const char c);
ssize_t my_fdputs(const int fd, const char *str);
void my_fdputn(const int fd, const int n);
char my_fdgetc(const int fd);
ssize_t my_fdgets(const int fd, char *str);

/* String manipulation functions */
void *my_memchr(const void *str, const unsigned char c, const size_t n);
ssize_t my_strlen(const char *str);

/* Misc functions */
int my_atoi(const char *str);
void *my_memcpy(void *dest, const void *src, const size_t count);
void my_exit(const char status);
int my_retstr(const int ret, const char *str);

/* Node structures*/
typedef struct s_node t_node;
struct s_node
{
    void *value;
    t_node *next;
};

/* Linked list functions */
typedef struct s_list t_list;
struct s_list
{
    t_node *start;
    t_node *end;
};

t_list *my_list_init();
void my_list_free(t_list *l);
t_node *my_list_append(t_list *l, void *value);

#endif
