#include <stdio.h>

/**
 * main - program entry
 *
 * Description: prints all single decimal digits using putchar
 * Return: 0
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar(48 + n);
	putchar('\n');
	return (0);
}
