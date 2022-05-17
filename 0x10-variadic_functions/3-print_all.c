#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_all - prints anything.
 *@format: list of types of arguments
 *
 *Return: Nothing
 */
void print_all(const char * const format, ...)
{
  va_list list;
  unsigned int i = 0, j = 0;
  char *p;
 
  va_start(list, format);
  while (format && format[i] != '\0')
    {
      switch (format[i])
	{
	case 'c':
	  switch (j)
	    { case 1: printf(", "); }
	  j = 1;
	  printf("%c", va_arg(list, int));
	  break;
	case 'i':
	  switch (j)
	    { case 1: printf(", "); }
	  j = 1;
	  printf("%d", va_arg(list, int));
	  break;
	case 'f':
	  switch (j)
	    { case 1: printf(", "); }
	  j = 1;
	  printf("%f", va_arg(list, double));
	  break;
	case 's':
	  switch (j)
	    { case 1: printf(", "); }
	  j = 1;
	  p = va_arg(list, char *);
	  if (p)
	    {
	      printf("%s", p);
	      break;
	    }
	  i++;
}
printf("\n"), va_end(list);
}
