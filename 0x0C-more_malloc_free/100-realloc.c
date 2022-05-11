#include "main.h"
#include <stdlib.h>

/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr: pointer to the memory previously allocated
 *@old_size: size in bytes of space allocated for ptr
 *@new_size: size in bytes for new memory block
 *
 *Return: pointer to reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *ptr_copy, *filler;
unsigned int i;

if (ptr != NULL)
  ptr_copy = ptr;
else
  {
    return (malloc(new_size));
  }
    if (new_size == old_size)
      return (ptr);
if (new_size == 0 && ptr != NULL)
  {
    free(ptr);
    return (0);
  }
filler = malloc(new_size);
if (filler == NULL)
  return (0);
for (i = 0; i < (old_size || i < new_size); i++)
  {
    *(filler + i) = ptr_copy[i];
  }
free(ptr);
return (filler);
}
