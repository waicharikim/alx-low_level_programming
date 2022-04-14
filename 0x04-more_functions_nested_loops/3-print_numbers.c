#include "main.h"
/**
 *main - entry point
 *print_numbers - prints the number 0-9
 *
 *Return: Always 0(success)
 */
int print_numbers(void)
{
  int i;
  i = 0;
  for (i = 0; i < 10; i++)
    _putchar(i + '0');
  _putchar('\n');
}
