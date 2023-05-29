#include "main.h"
/**
 * swap_int - swap the values of 2 integers
 * @a: value to be swapped with b
 * @b: value to be swapped with a
 *
 * return: void
 */
void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
