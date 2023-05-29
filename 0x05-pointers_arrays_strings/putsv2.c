#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string following by a new line
 * @str: string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}
