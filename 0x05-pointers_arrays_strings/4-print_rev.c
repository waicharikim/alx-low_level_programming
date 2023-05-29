#include "main.h"

/**
 * print_rev - print a string in reverse and a new line
 * @s: pointer to string to be printed
 *
 * Return: void
 */

int _strlen(char *s);

void print_rev(char *s)
{
	int len;

	len = _strlen(s);

	if (len > 0)
		s = s + (len - 1);
	while (len)
	{
		_putchar(*s);
		s--;
		len--;
	}
	_putchar('\n');
}
/**
 * _strlen - function for calculating lenth of the string
 * @s: string to be measured length
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
		len++;
	return (len);
}
