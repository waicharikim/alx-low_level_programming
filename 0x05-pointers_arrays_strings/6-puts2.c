#include "main.h"

/**
 * puts2 - print every other character of a string folowed by a new line
 * @str: string to be printed
 *
 * Return: void
 */

int _strlen(char *s);
void puts2(char *str)
{
	int len;

	len = _strlen(str);
	while (len)
	{
		_putchar(*str);
		str += 2;
		len -= 2;
	}
	_putchar('\n');
}
/**
 * _strlen - compute length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
        int len;

        for (len = 0; *s != '\0'; s++)
                len++;
        return (len);
}
