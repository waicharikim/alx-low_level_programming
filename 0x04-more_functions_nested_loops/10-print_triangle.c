#include "main.h"

/**
 *print_triangle - prints triangle
 *@size: limit
 *
 *Return: void
 */
void print_triangle(int size)
{
int i, k, x, y;
if (size > 0)
{
i - size - 1;
for (x = 0; x < size; x++)
{
for (y = i; y > 0; y--)
{
_putchar(' ');
}
for (k = 0; k <= x; k++)
{
_putchar(35);
}
i--;
_putcar('\n');
}
}
else
{
_putchar('\n');
}
}
