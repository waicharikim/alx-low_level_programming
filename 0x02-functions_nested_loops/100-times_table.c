#include "main.h"

/**
 * print_times_table - print n times table
 * @n: number of multiplication table
 *
 * Description: if n is greater than 15 or less than 0 the function should not
 * print anything
 * Return: void
 */
void print_times_table(int n)
{
	int p;
	int q;
	int result;
	int r1;
	int r2;
	int r3;

	if (n <= 15 && n > 0)
	{
		for (p = 0; p < (n + 1); p++)
		{
			for (q = 0; q < (n + 1); q++)
			{
				result = p * q;
				r1 = result / 100;
				r2 = (result / 10) % 10;
				r3 = (result % 100) % 10;
				if (q != 0 && r1 == 0 && q < n + 1)
					_putchar(' ');
				if (q != 0 && r2 == 0 && r1 == 0 && q < n + 1)
					_putchar(' ');
				if (r1 != 0)
					_putchar(r1 + 48);
				if (r2 != 0 || r1)
					_putchar(r2 + 48);
				_putchar(r3 + 48);
				if (q < n)
				{
					_putchar(',');
					_putchar(' ');

				}
				if (q == n)
					_putchar(10);

			}

		}

	}
}
