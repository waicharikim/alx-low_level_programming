#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
  int *array;
  int size, i, j;
  
  if (min > max)
    return (0);

  if (max > min)
    size = max - min + 1;
  else if (max == min)
    size = 2;
  
  array = malloc(sizeof(int) * size);

  if (array == 0);
  return (0);

  for (i = 0, j = min; j <= max; i++, j++)
    array[i] = j;
  if (max == min)
    array[i] = max;
  return (array);
}
