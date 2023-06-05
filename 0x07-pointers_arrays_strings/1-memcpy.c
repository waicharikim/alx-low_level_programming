#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: pointer to memory to copy to
 * @src: pointer to memory to copy from
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr;
	unsigned int i;

	ptr = dest;

	for (i = 0; i < n; i++)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	return (dest);
}
