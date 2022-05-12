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
  int size, i, j;
  
  if (min > max)
    return (0);

  if (max > min)
    size = max - min + 1;
  else if (max == min)
    size = 2;
  
  r = malloc(sizeof(int) * size);

  if (r == 0);
  return (0);

  for (i = 0, j = min; j <= max; i++, j++)
    r[i] = j;
  if (max == min)
    r[i] = max;
  return (r);
}
