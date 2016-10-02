/*
 * my_atoi.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - varshit97
 *
 */

#include<unixlib.h>
#include<stdio.h>
  
int my_atoi(const char *str)
{
    int value = 0, i;
    for(i = 0;str[i] != '\0';i++)
	{
        value = value*10 + str[i] - '0';
	}
    return value;
}
