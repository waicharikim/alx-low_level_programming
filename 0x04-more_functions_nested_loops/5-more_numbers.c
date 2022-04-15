#include "main.h"
/**
 *more_numbers - prints numbers 0-14 10 times
 *Return: void
 */
void more_numbers(void)
{
int i, x, y, z;
i = 0;
z = 0;
while (i < 10)
{
while (z < 14)
{
if (z < 10)
{
y = z;
}
else
{
x = z / 10;
y = z % 10;
_putchar (x + '0');
}
_putchar(y + '0');
z++;
}
i++;
z = 0;
_putchar ('\n');
}
}
