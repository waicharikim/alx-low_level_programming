#include "main.h"

/**
 *_strlen - length of a string
 *@s: A pointer to an int to be updated
 *
 *Return: void
 */

int _strlen(char *s)
{
  int u;
  u = 0;
  while (s[u] != '\0')
    {
      u++;
    }
  ruturn (u);
}
