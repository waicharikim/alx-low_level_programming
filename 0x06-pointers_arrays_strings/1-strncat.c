#include "main.h"

/**
 * _strncat - concantenates two strings
 * @dest: pointer to string to append to
 * @src: pointer to string to append from
 * @n: no of bytes contained by src
 *
 * Description: uses atleast n bytes from src
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *buffer;

	buffer = dest;
	while (*buffer)
		buffer++;
	while (n)
	{
		if (*src)
		{
			*buffer = *src;
			buffer++;
			src++;
			n--;
		}
		else
			break;
	}
	*buffer = '\0';
	return (dest);
}
