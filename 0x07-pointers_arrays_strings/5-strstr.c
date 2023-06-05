#include "main.h"

#define NULL (void *)0
/**
 * _strstr - locate a substring
 * @haystack: pointer to string to check first occurance that matches accept
 * @needle: pointer to the string to be checked
 *
 * Return: pointer to first occurence of a byte in s that matches accept
 * or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *hay;
	char *need;
	char *stack;
	char *strlen;
	int len;

	hay = haystack;
	need = needle;
	strlen = needle;
	len = 0;

	while (*strlen != '\0')
	{
		len++;
		strlen++;
	}

	while (*hay)
	{
		stack = hay;
		while (*need == *hay)
		{
			len--;
			if (!len)
				return (stack);
			hay++;
			need++;
		}
		hay++;
	}
	return (NULL);
}
