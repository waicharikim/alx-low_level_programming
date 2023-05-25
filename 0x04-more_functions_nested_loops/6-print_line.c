#include "main.h"
/**
 * print_line - draw a straight line
 * @n: number of characters to be print the character '_'
 *
 * Return: void
 */
void print_line(int n)
{
	int c;

	if (n > 0)
	{
		for (c = 0; c < n; c++)
			_putchar('_');
		_putchar(10);
	}
	else
		_putchar(10);
}
