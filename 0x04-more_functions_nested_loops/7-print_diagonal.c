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
			_putchar('\\');
			_putchar(10);
			for (p = 0; p < c + 1; p++)
				_putchar(' ');
		}
	}
	else
		_putchar(10);
}
