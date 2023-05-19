#include <stdio.h>

/**
 * main - program entry
 *
 * Description: print all single decimal digits separated by a , and space
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(48 + n);
		if (n == 9)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
