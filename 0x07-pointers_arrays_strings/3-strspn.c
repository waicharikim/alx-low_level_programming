#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: pointer to string to be checked
 * @accept: pointer to string to check for in s
 *
 * Return: number of bytes in the initial segment of s
 * that conaists only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	char *len;
	char *acc;
	unsigned int n;
	unsigned int l;
	unsigned int count;

	n = 0;
	l = 0;
	len = accept;

	while (*len != '\0')
	{
		l++;
		len++;
	}

	while (*s)
	{
			count = 0;

		while (*s != ' ')
		{
			if ((*s > 96 && *s < 123) || (*s > 64 && *s < 123))
				count++;
			for (acc = accept; *acc != '\0'; acc++)
			{
				if (*acc == *s)
				{
					n++;
				}
				else
					continue;

			}
			acc = accept;
			s++;
		}

		if (n >= l)
			return (count);
		s++;
	}
	return (0);
}
