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
#define FAILURE 1

int putc(const char c);
int puts(const char *str);

#endif
