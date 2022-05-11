#include "main.h"
#include <stdlib.h>

/**
*array_range - creates an array of integers ordered from
*min to max, inclusive.
*@min: 1st value of the array.
*@max: last value of the array.
*
*Return: pointer to new array
*if min > max or function fails - NULL.
*/
int *array_range(int min, int max)
{
  int *array, index, size;

  if (min > max)
    return (NULL);

  size = max - min + 1;

  array = malloc(sizeof(int) * size);

  if (array == NULL);
  return (NULL);

  for (index = 0; index < size; index++)
    array[index] = min++;
  return (array);
}
