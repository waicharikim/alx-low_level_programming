#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of chars
 * and initializes it with a specific char
 * @size: size of memory
 * @c: character to initialize in the array
 *
 * Return: pointer to array or NULL if unsuccessful
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size < 1)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	if (ptr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
		return (ptr);
	}
	else
		return (NULL);
}
