#include "main.h"
/**
 * jack_bauer - print every minute from 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int h;
	int m;
	int h1;
	int h2;
	int m1;
	int m2;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			h1 = h / 10;
			h2 = h % 10;
			m1 = m / 10;
			m2 = m % 10;

			_putchar(h1 + 48);
			_putchar(h2 + 48);
			_putchar(':');
			_putchar(m1 + 48);
			_putchar(m2 + 48);
			_putchar(10);

		}
	}
}
