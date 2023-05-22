#include <stdio.h>
/**
 * main - program entry
 *
 * Description: program that prints all combinations of three digit numbers
 * Return: 0
 */
int main(void)
{
	int m;
	int n;
	int p;

	for (n = 0; n < 8; n++)
	{
		for (p = n + 1; p < 9; p++)
		{
			for (m = p + 1; m < 10; m++)
			{
				putchar(48 + n);
				putchar(48 + p);
				putchar(48 + m);
				if (n != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
