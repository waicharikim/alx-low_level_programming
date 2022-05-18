#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_strings - prints strings
 *@separator: string to print between strings
 *@n: number of strings
 *
 *Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
  va_list list;
unsigned int i;
char *s;

va_start(list, n);

for (i = 0; i < n; i++)
  {
    s = va_arg(list, char*);
    if (s != NULL)
      printf("%s", s);
    else
      printf("%p", s);
    if (separator != NULL && i < n - 1)
	printf("%s", separator);
  }
printf("\n");
va_end(list);
}
