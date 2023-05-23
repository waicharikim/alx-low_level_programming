#include "main.h"
/**
 * print_alphabet_x10 - print the alphabets ten times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i;
	int n;

	for (i = 0; i < 10; i++)
	{
		for (n = 97; n < 123; n++)
		{
			_putchar(n);
		}
		_putchar(10);
	}
}
