#include <stdio.h>
/**
 * main - program entry
 *
 * Description: program that prints all combinations of two digit numbers
 * Return: 0
 */
int main(void)
{
	int n;
	int p;

	for (n = 0; n < 9; n++)
	{
		for (p = n + 1; p < 10; p++)
		{
			putchar(48 + n);
			putchar(48 + p);
			if (n != 8)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
