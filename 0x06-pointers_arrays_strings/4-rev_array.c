#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: pointer to the integer array
 * @n: number of elements to reverse
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *start;
	int *end;
	int temp;
	int i;

	temp = 0;
	start = a;
	end = a + n - 1;

	for (i = 0; i < n / 2; i++)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
