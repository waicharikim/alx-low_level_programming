#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated
*space in memory containing copy of a str
*@str: string to be copied
*
*return: pointer to allocated space
*NULL if there's an error
*/
char *_strdup(char *str)
{
char *cpy;
int index, len;
if (str == NULL)
return (NULL);
for (index = 0; str[index]; index++)
len++;
cpy = malloc(sizeof(char) * (len + 1));
if (cpy == NULL)
return (NULL);
for (index = 0; str[index]; index++)
{
cpy[index] = str[index];
}
cpy[len] = '\0';
return (cpy);
}
