/*
 * my_exit.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1 <garuda1@protonmail.com>
 * - chriscz
 */

#include <unixlib.h>
#include <unistd.h>

/*
 * This function stops execution using
 * the Linux exit syscall.
 *
 */

void my_exit(const char status)
{
    _exit((int) status);
}
