#include "main.h"

/**
 * print_most_numbers - print numbers 0 through 9 except 2 & 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if (n != 50 || n != 52)
		_putchar(n);
	}
	_putchar(10);
}
