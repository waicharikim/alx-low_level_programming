#include "main.h"
/**
 *cap_string - capitalizes all words in a string
 *@s: input string
 *return: s
 */
char *cap_string(char *s)
{
  int x, y;
  int marker;
  char nots[] = ",;.!?()()\nt\" ";
  for (x = 0, marker = 0; s[x] != '\0'; x++)
    {
      if (s[0] > 96 && s[0] < 123)
	marker = 1;
      for (y = 0; nots[y] != '\0'; y++)
	{
	  if (nots[y] == s[x])
	    marker = 1;
	}
      if (marker)
	{
	  if (s[x] > 96 && s[x] < 123)
	    {
	      s[x] -= 32;
	      marker = 0;
	    }
	  else if (s[x] > 64 && s[x] < 91)
	    marker = 0;
	  else if (s[x] > 47 && s[x] < 58)
	    marker = 0;
	}
    }
  return (s);
}
