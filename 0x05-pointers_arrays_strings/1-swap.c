#include "main.h"

/**
 * swap_int - swap the value of 2 int
 * @a: first int
 * @b: second int
 * Rturn: 0
 */

void swap_int(int *a, int *b)
{
int s;

s = *a;
*a = *b;
*b = s;
}
