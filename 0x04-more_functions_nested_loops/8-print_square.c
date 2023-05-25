#include "main.h"
/**
 * print_square - draw a square using '#'
 * @size: size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int c;
	int p;

	if (size > 0)
	{
		for (c = 0; c < size; c++)
		{
			for (p = 0; p < size; p++)
			{
				_putchar('#');
				if (p == size - 1)
					_putchar(10);
			}
		}
		_putchar(10);
	}
	else
		_putchar(10);
}
