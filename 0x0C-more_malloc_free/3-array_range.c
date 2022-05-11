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
  int *array, i = 0, t = min;

  if (min > max)
    return (0);

  array = malloc((max - min + 1) * sizeof(int));

  if (!array);
  return (0);

  while (i <= max - min)
    array[i++] = t++;
  return (array);
}
