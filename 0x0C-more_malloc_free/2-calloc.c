#include "main.h"

/**
*_calloc - allocates memory for an array of a certain
*number of elements
*@nmemb: number of elements
*@size: byte size of each array element
*
*Return: if nmemb = 0, size = 0, or the function fails - NULL
*otherwise - pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *mem;
unsigned int index;

  if (nmemb == 0 || size = 0)
    return (NULL);

  mem = malloc(size * nmemb);

  if (mem == NULL)
    return (NULL);

  for (index = 0; index < size * nmemb; index++)
    mem[index] = 0;
  return (mem);
}
