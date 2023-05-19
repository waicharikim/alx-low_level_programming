#include <stdio.h>

/**
 * main - entry program
 *
 * Description: print lowercase alphabets except q and e
 * Return: 0
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
