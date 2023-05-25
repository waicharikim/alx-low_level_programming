#include "main.h"
/**
 * print_triangle - draw a triangle using the character '#'
 * @size: size of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int n;
	int p;
	int m;

	if (size > 0)
	{
		for (n = 0; n < size; n++)
		{
			for (p = size; p > n; p--)
				_putchar(' ');
			for (m = 0; m < n + 1; m++)
				_putchar('#');
			_putchar(10);
		}
		_putchar(10);
	}
	else
		_putchar(10);
}
