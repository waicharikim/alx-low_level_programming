#include <stdio.h>
/**
 *Description: prime factors of 612852475143
 *
 *Return: int
 */
int main(void)
{
unsigned long x, y, max;
x = 612852475143;
max = 1;
for (y = 3; y <= x; y += 2)
{
while (x % y == 0)
{
max = x;
x = x / y;
}
}
printf("%lu\n", max);
return (0);
}
