#include "main.h"

/**
 * _strlen - compute length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
		len++;
	return (len);
}

/**
 * _strcat - concatenates two strings
 * @dest: pointer to the string to be appended to
 * @src: pointer to the string to append from
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int len;

	len = _strlen(dest);
	dest = dest + len;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
