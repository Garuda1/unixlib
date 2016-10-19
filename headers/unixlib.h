/*
 * unixlib.h
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1
 * - SametSisartenep
 * - varshit97
 * - chriscz
 * - DLion
 * - makomi
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

/* Error checking */
#define SUCCESS 0
#define FAILURE -1

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

/* Misc functions */
int my_atoi(const char *str);
void *my_memcpy(void *dest, const void *src, const size_t count);
void *my_memset(void *ptr, int value, size_t num);
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
