#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an array of integers
 * @min: start of array
 * @max: end of array
 *
 * Return: pointer to array, NULL if malloc fails or min > max
 */
int *array_range(int min, int max)
{
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min) + 1);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
