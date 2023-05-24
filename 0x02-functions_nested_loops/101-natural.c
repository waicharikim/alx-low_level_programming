#include <stdio.h>

/**
 * main - program entry
 *
 * Description: computes the sum of all multiples of 3 & 5 below 1024
 * Return: 0 success
 */
int main(void)
{
	int n;
	int result = 0;

	for (n = 0; n < 1024; n++)
	{
		if (((n % 3) == 0) || ((n % 5) == 0))
			result = result + n;

	}
	printf("%d\n", result);
	return (0);
}
