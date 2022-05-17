#include <stdlib.h>
#include "function_pointers.h"
/**
 *array_iterator - executes a function given as a perimeter
 *on each element on an array
 *
 *@array: array to iterate 
 *@size: size of the array
 *@action: pointer to the function being used
 */
void array_iteration(int *array, size_t size, void (*action)(int))
{
  unsigned int i;
  if (!action || !array)
    return;
  for (i = 0; i < size; i++)
    action(array[i]);
}
