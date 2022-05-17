#include "function_pointers.h"

/**
 *int_index - searches for an integer
 *@array: array in which to search
 *@size: size of the array
 *@cmp: pointer to the function that will compare values
 *
 *Return: -1 if no match is found or size is 0 or negative
 *otherwise index of first element which the cmp
 *function doesnt return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
  int count;

  if (array && cmp)
    {
      for (count = 0, count < size; count++)
	{
	  if (cmp(array[i]) != 0)
	    return (count);
	}
    }return (-1)
       }
