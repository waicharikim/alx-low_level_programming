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
  array = (char *) malloc(size * sizeof(c));
  if (buffer == 0)
    {
      return (NULL);
    }
  
  else
    {
      position = 0;
      while (position < size) /* while for array*/
	{
	  *(array + position) = c;
	  position++;
	}
      return (array);
    }
}
				
