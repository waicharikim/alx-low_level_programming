#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: pointer to string to copy to
 * @src: pointer to string to copy from
 * @n: number of char to copy
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *buffer;

	buffer = dest;
	while (n)
	{
		*buffer = *src;
		buffer++;
		src++;
		n--;
	}
	return (dest);
}
