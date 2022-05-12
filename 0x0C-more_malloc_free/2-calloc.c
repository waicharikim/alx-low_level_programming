#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_memset - initializes n bytes of memory to x
 *@ptr: initial address
 *@x: variable to initialize with
 *@n: number of bytes to initialize
 *
 *Return: pointer char
 */
char *_memset(char *ptr, int x, unsigned int n)
{
  unsigned int i;

  for (i = 0; i < n; i++)
    ptr[i] = x;
  return (ptr);
}

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
void *mem;


  if (nmemb == 0 || size == 0)
    return (0);

  mem = malloc(nmemb * size);

  if (mem == 0)
    return (0);

  _memset(mem, 0, size * nmemb);
  return (mem);
}
