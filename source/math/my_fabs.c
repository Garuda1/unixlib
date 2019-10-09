/*
   * my_fabs.c
   *
   * Licensed under GNU GPL v3
   * Contributors:
   * - Brandon Cline (bjcline21@gmail.com)
   */

#include <unixlib-math.h>

/*
  This function simply returns the floating point absolute value of the float value input through the parameter.
*/

double abs (double x) {
    return x >= 0 ? x : -x;
}
