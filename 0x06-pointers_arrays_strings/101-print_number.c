#include "main.h"

/**
 * print_number - print an integer
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
		_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);
	}
	else if (n == 0)
		_putchar('0');

	else if (n > 0 && n < 10)
		_putchar(n + 48);
	else if (n > 9 && n < 100)
	{
		_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);
	}
	else if (n > 99 && n < 1000)
	{
		_putchar((n / 100) + 48);
		_putchar(((n % 100) / 10) + 48);
		_putchar(((n % 100) % 10) + 48);
	}

	else
	{
		_putchar((n / 1000) + 48);
		_putchar(((n / 100) % 10) + 48);
		_putchar(((n % 100) / 10) + 48);
		_putchar(((n % 100) % 10) + 48);
	}
}
