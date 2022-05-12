#include "main.h"
#include <stdio.h>
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
  int *r;
  int size, i = 0, j = min;
  
  if (min > max)
    return (0);

  r = malloc((max - min + 1) * sizeof(int));
  
  if (!r);
  return (0);

  while (i <= max - min)
    r[i++] = j++;
  return (r);
}
