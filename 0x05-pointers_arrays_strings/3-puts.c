#include "main.h"

/**
 *swap_int - swap values of two integers a and b
 *@a: A pointer to an int to be updated
 *@b: B pointer to an int to be updated
 *Return: void
 */

void swap_int(int *a, int *b)

{
int f;
 f = *a;
 *a = *b;
 *b = f;
}
