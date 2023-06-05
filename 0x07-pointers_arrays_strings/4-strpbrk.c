#include "main.h"

#define NULL (void *)0
/**
 * _strpbrk - search a string for any set of bytes
 * @s: pointer to string to check first occurance that matches accept
 * @accept: pointer to the string to be checked
 *
 * Return: pointer to first occurence of a byte in s that matches accept
 * or NULL if not found
 */

char *_strpbrk(char *s, char *accept)
{
	char *ptr;
	char *acc;

	ptr = s;
	while (ptr)
	{
		for (acc = accept; *acc != '\0'; acc++)
		{
			if (*acc == *ptr)
				return (ptr);
			else
				continue;
		}
		acc = accept;
		ptr++;
	}
	return (NULL);
}
