#include "main.h"

#define NULL (void *)0
/**
 * _strchr - locate a character in a string
 * @s: pointer to string
 * @c: character to search for
 *
 * Return: pointer to first occurence of c in s. or NULL if not found
 */

char *_strchr(char *s, char c)
{
	char *ptr;

	ptr = s;
	while (*ptr)
	{
		if (*ptr != c)
			ptr++;
		else
			return (ptr);
	}
	return (NULL);
}
