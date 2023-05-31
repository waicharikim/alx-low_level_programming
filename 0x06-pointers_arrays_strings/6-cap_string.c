#include "main.h"

/**
 * cap_string - capitalise all words of a string
 * @c: pointer to a string
 *
 * Return: pointer to the changed string
 */
char *cap_string(char *c)
{
	char *ch;

	ch = c;
	if (*ch > 96 && *ch < 123)
	{
		*ch -= 32;
		ch++;
	}

	while (*ch)
	{
		while (*ch == ' ' || *ch == '\n' || *ch == '.' || *ch == '\t')
		{
			ch++;
			if (*ch > 96 && *ch < 123)
				*ch -= 32;
			else
				continue;
		}
		ch++;
	}
	return (c);
}
