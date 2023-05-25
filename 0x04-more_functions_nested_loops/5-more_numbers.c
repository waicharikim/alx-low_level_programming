#include "main.h"

/**
 * more_numbers - print numbers 0 through 14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int n;
	int n1;
	int n2;

	n1 = n / 10;
	n2 = n % 10;

	for (n = 0; n < 15; n++)
	{
		if (n1 != 0)
		_putchar(n1 + 48);
		_putchar(n2 + 48);
		_putchar(10);
	}
}
