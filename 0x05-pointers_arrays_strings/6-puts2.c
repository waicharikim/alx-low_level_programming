#include "main.h"

/**
 * puts2 - print every other character of a string folowed by a new line
 * @str: string to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
while (*str != '\0')
        {
                _putchar(*str);
                str += 2;
        }
        _putchar('\n');
}
