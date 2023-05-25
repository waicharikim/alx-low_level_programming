#include "main.h"
/**
 * print_diagonal - draw a diagonal line
 * @n: number of characters to be print the character '\'
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int c;
	int p;

	if (n > 0)
	{
		for (c = 0; c < n; c++)
		{
			for (p = 1; p < c + 1; p++)
				_putchar(' ');
			_putchar('\\');
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
