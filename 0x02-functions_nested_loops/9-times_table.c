#include "main.h"

/**
 * times_table - print 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int n;
	int p;
	int result;
	int r1;
	int r2;

	for (n = 0; n < 10; n++)
	{
		for (p = 0; p < 10; p++)
		{
			result = n * p;
			r1 = result / 10;
			r2 = result % 10;
			if (r1 != 0)
			{
				_putchar(r1 + 48);
			}
			_putchar(r2 + 48);
			if (p < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (result < 10 && p < 9)
				_putchar(' ');
			if (p == 9)
				_putchar(10);

		}

	}
}
