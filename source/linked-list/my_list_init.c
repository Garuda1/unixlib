/*
 * my_list_init.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - chriscz
 *
 */
#include <unixlib.h>

/*
 * Allocate memory for a singly linked list.
 *
 */

t_list *my_list_init(void)
{
    return ((t_list *) my_calloc(1, sizeof(t_list)));
}
