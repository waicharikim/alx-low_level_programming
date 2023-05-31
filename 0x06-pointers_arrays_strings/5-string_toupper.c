#include "main.h"

/**
 * string_toupper - change all lowercase letters of a string to uppercase
 * @c: pointer to char
 *
 * Return: pointer to changed char
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] > 96 && c[i] < 123)
			c[i] -= 32;
	}
	return (c);
}
