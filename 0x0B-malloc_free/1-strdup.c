#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copy a string to a newly allocated space in memory
 * @str: pointer to string to duplicate
 *
 * Return: pointer to newly allocated space.
 *  NULL if there was insufficient memory
 */
char *_strdup(char *str)
{
	char *str2;
	char *ptr;
	int count;
	int i;

	if (str == NULL)
		return (NULL);
	ptr = str;
	count = 0;
	while (*ptr != '\0')
	{
		count++;
		ptr++;
	}
	str2 = malloc(sizeof(char) * count + 1);
	if (str2 != NULL)
	{
		for (i = 0; i < count; i++)
		{
			str2[i] = str[i];
		}
		str2[i] = '\0';
		return (str2);
	}
	else
		return (NULL);
}
