#include "main.h"

/**
 * _strcpy - copies string pointed by src including \0 to the buffer pointed
 * to by dest
 * @dest: pointer to the buffer to copy a string to
 * @src: pointer to the string to copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dest);
}
