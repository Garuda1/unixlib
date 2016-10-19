/*
 * my_atoi.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - varshit97
 * - Garuda1 <garuda1@protonmail.com>
 * - Rodrigo González López (SametSisartenep)
 *
 */

#include <unixlib.h>
#include <unixlib-string.h>
#include <stdio.h>

int my_atoi(const char *str)
{
	int value=0, neg=0;
	while (my_isspace(*str)) str++;
	switch (*str) {
	case '-': neg=1;
	case '+': str++;
	}
	/* Work with n as negative to avoid integer overflow */
	while (my_isdigit(*str))
		value = 10*value - (*str++ - '0');
	return neg ? value : -value;
}
