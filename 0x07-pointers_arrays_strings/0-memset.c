#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: pointer to memory
 * @b: character to fill memory with
 * @n: number of bytes of memory to fill
 *
 * Return: pointer to memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr;
	unsigned int i;

	ptr = s;

	for (i = 0; i < n; i++)
	{
		*ptr = b;
		ptr++;
	}
	return (s);
}
