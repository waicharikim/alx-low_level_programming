#include <stdio.h>

/**
 * main - program entry
 *
 * Description: print alphabets
 * Return: 0
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
