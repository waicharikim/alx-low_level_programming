#include "main.h"

/**
 * more_numbers - print numbers 0 through 14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int c;
	int n;
	int n1;
	int n2;

	for (c = 0; c < 10; c++)
	{
		for (n = 0; n < 15; n++)
		{
			n1 = n / 10;
			n2 = n % 10;
			if (n1 != 0)
				_putchar(n1 + 48);
			_putchar(n2 + 48);
		}
		_putchar(10);
	}
}
