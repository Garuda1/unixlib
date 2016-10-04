/*
 * my_atoi.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - varshit97
 * - Garuda1 <garuda1@protonmail.com>
 *
 */

#include<unixlib.h>
#include<stdio.h>
  
int my_atoi(const char *str)
{
    int value = 0, i;
    for(i = 0;str[i] != CHAR_NULL;i++)
	{
        value = value*10 + str[i] - '0';
	}
    return value;
}
