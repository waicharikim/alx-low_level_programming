#include <stdlib.h>
/**
*malloc_checked - allocate memory
*
*@b: amount of bytes
*
*Return: pointer to new allocated memory
*exit with 98 if malloc fails
*/

void *malloc_checked(unsigned int b)
{
void *ptr;

 ptr = malloc(b);
 if (ptr == NULL)
   {
     exit(98);
   }
 return (ptr);
}
