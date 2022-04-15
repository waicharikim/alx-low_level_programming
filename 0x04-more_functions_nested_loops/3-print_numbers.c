#include "main.h"
/**
 *main - entry point
 *print_numbers - prints the numbers 0-9
 *
 *Return: Always 0(success)
 */
void print_numbers(void)
{
int i;
i = 0;
while (i < 10)
{
_putchar(i + '0');
i++;
}
_putchar('\n');
}
