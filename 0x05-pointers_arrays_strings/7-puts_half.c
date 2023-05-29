#include "main.h"

/**
 * puts_half - print half a  string and a new line
 * @s: pointer to string to be printed
 *
 * Description: prints the second half of the string, if the no. of char is odd
 * print last n char where n = (_strlen - 1)/2
 * Return: void
 */
int _strlen(char *s);

void puts_half(char *str)
{
	int len;

	len = _strlen(str);

	if (len % 2 == 0)
	{
		str = str + (len / 2);
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
	}
	else
	{
		str = str + ((len - 1) / 2);
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
	}
	_putchar('\n');
}
/**
 * _strlen - function for calculating lenth of the string
 * @s: string to be measured length
 *
 * Return: legth of string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
		len++;
	return (len);
}
