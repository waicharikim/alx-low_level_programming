#include "main.h"
/**
*_strchr - locates a character in a string
*@s: string
*@c: char to search
*return: pointer to first appearance of char c in string s
*/
char *_strchr(char *s, char c)
{
  while (*s != '\0')
    {
      if (*s == c)
	{
	  return (s);
	}
      ++s;
    }
  if (*s == c)
    {
      return (s);
    }
  return (0);
}
