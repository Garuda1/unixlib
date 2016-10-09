/*
 * my_list_append.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - chriscz
 *
 */
#include <unixlib.h>


/*
 * Append the given value to the list, and return a pointer
 * to the node.
 *
 * Return MY_NULL if an allocation error occurs.
 *
 */

t_node *my_list_append(t_list *l, void *value)
{
    t_node *nn;

    nn = my_malloc(sizeof(t_node));

    if (!nn) return MY_NULL;

    nn->value = value;
    nn->next = MY_NULL;

    if (!l->start) {
        l->start = nn;
    }

    if (l->end) {
        l->end->next = nn;
    }

    l->end = nn;

    return nn;
}
