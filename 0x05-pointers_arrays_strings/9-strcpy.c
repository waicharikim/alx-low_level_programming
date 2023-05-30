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
	int i;
	int len;

	len = _strlen(src);
	for (i = 0; i < len; i++, src++)
	{
		dest[i] = *src;
	}
	dest [i] = '\0';
	return (dest);
}
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
