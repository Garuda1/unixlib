/*
 * unixlib-string.h
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Thomas Murgia <garuda1@protonmail.com>
 *
 */

#ifndef _UNIXLIB_STRING_H
#define _UNIXLIB_STRING_H

/* Character checking functions */
int my_isdigit(const int c);
int my_islower(const int c);
int my_isupper(const int c);
int my_isspace(const int c);

/* Character transformation functions */
char my_tolower(const char c);
char my_toupper(const char c);

/* String manipulation functions */
void *my_memchr(const void *str, const unsigned char c, const size_t n);
ssize_t my_strlen(const char *str);
int my_strcmp(const char *s1, const char *s2);
char *my_strcpy(char *dst, const char *src);
char *my_strncpy(char *dst, const char *src, size_t num);
char *my_strcat(char *dest, const char *src);

#endif /* #ifndef _UNIXLIB_STRING_H */
