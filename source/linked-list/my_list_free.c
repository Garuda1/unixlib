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
 * Release all memory used by the list and its elements.
 */

void my_list_free(t_list *l)
{
    t_node *pn, *pt;
    pn = l->start;

    while (pn) {
        pt = pn->next;
        my_free(pn);
        pn = pt;
    }
    my_free(l);
}
