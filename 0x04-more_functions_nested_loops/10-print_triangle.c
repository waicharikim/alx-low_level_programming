#include "main.h"

/**
 *print_triangle - prints triangle
 *@size: limit
 *
 *Return: void
 */
void print_triangle(int size)
{
int x, y;
if (size > 0)
{
for (x = 0; x < size; x++)
{
for (y = 0; y < size; y++)
{
if ((size - x - 1) > y)
_putchar('#');
else
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
