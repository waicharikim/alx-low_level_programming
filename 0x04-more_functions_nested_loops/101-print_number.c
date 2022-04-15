#include "main.h"
#include <stdio.h>
/**
 *print_number: prints int using putchar
 *@n: gets integer, hello
 *
 *Return: void
 */
void print_number(int n)
{
unsigned long i;
if (n < 0)
{
_putchar('-');
i = -n;
}
else
{
i = n;
}
if (i / 10 != 0)
print_number(i / 10);
_putchar((i % 10) + '0');
}
