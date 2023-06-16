#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: string to add to
 * @s2: string to be added to s1
 * @n: no of bytes from s2 to add to s1
 *
 * Return: pointer to new memory containing s1 and n bytes from s2
 * NULL for fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len;
	char *src;
	unsigned int i;

	len = 0;
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	for  (src = s2; *src; src++, len++)
		;
	if (n > len)
		n = len;
	str = malloc(sizeof(s1) + (sizeof(char) * n));
	if (str != NULL)
	{
		for (i = 0; *s1; s1++, i++)
			*(str + i) = *s1;
		for ( ; n; s2++, i++, n--)
			*(str + i) = *s2;
		*(str + i) = '\0';
		return (str);
	}
	return (NULL);
}
