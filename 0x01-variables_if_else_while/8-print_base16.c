#include <stdio.h>

/**
 * main - program entry
 *
 * Description: print hexadecimals
 * Return: 0
 */
int main(void)
{
	int n;
	int p;

	for (n = 0; n < 10; n++)
		putchar(48 + n);
	for (p = 0; p < 6; p++)
		putchar(97 + p);
	putchar('\n');

	return (0);
}
