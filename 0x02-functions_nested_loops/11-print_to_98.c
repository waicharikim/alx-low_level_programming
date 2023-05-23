#include <stdio.h>

/**
 * print_to_98 - print to 98
 * @n: number to print from
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n == 98)
		printf("%d", n);
	else if (n > 98)
	{
		for ( ; n > 97; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	else
		for ( ; n < 99; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	printf("\n");
}
