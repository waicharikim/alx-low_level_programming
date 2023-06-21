#include "function_pointers.h"
/**
 * array_iterator - execute a function given as a parameter on each element
 * of an array
 * @array: pointer to int
 * @size: size of array
 * @action: pointer to function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
