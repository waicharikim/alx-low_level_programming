#include "main.h"

/**
 *_strpbrk - matches any specified character
 *@s: c string to be scanned
 *@accept: character in str1 which matches one of the char in str2
 *return: string s that matches any char specified in accept
 **/
char *_strpbrk(char *s, char *accept)
{
  int j;
  while (*s != '\0')
    {
      j = 0;
      while (accept[j] != '\0')
	{
	  if (*s == accept[j])
	    {
	      return (s);
	    }
	  j++;
	}
      s++;
    }
  return (0);
}
