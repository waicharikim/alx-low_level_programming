#include "main.h"
/**
 *_strncpy - copies a string
 *@dest: pointer to acharacter that will be modified
 *@src: pointer to a character that will be modified
 *@n: value
 *return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
