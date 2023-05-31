#include "main.h"

/**
 * _strcmp - compare tqo strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: difference of ASCII value of the char in s1 corresponding to s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return (*s1 - *s2);
	}
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	else
		return (*s1 - *s2);
}
