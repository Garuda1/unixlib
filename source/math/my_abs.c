/*
   * my_abs.c
   *
   * Licensed under GNU GPL v3
   * Contributors:
   * - Brandon Cline (bjcline21@gmail.com)
   */

#include <unixlib-math.h>

/*
    This function simply returns the absolute value of the integer input passed into the parameter.
*/

int abs (int x) {
    return x >= 0 ? x : -x;
}
