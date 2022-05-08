#include "main.h"
/**
 *create_array - creates an array of chars
 *@size: size of the array
 *@c: character to insert
 *return: pointer to array
 *NULL if size is 0 or if it fails
 */
char *create_array(unsigned int size, char c)
{
  char *array;
  unsigned int position;

  if (size == 0)
    {
      return (NULL);
    }

  /*Define values with malloc*/
  array = malloc(sizeof(char) * size);
  if (array == NULL)
          return (NULL);
  for (position = 0; position < size; position++)
    array[position] = c;
  return (array);
}
