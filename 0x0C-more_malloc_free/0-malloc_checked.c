#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory
 * @b: size of memory to allocate
 *
 * Return: pointer to allocated memory, 98 for fail
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit (98);
	}
	else
		return (ptr);
}
