#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for an array using malloc
 * @nmemb: no of elements in an array
 * @size: size of each element in the array
 *
 * Return: pointer to allocated memory, NULL if malloc fails or size == 0
 * or nmemb == 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr != NULL)
	{
		for (i = 0; i < nmemb; i++)
			*((char *)ptr + i) = '\0';
		return (ptr);
	}
	return (NULL);
}
