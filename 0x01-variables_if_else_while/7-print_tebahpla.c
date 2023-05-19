#include <stdio.h>

/**
 * main - program entry
 *
 * Description: print alphabets in reverse
 * Return: 0
*/
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');

	return (0);
}
