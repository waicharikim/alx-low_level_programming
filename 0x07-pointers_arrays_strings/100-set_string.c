#include "main.h"

/**
 * set_string - set the value of a pointer to a char
 * @s: pointer to a pointer to a char
 * @to: pointer to string to update
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	while (*to)
	{
		**s = *to;
		s++;
		to++;
	}
}
