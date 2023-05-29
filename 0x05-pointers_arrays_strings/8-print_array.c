#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array of ints, and a new line
 * @a: pointer to an int
 * @n: number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	while (n > 0)
	{
		printf("%d", *a);
		if (n != 1)
			printf(", ");
		n--;
		a++;
	}
	printf("\n");
}
