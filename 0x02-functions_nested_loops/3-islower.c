#include "main.h"
/**
 * _islower - check whether a character is lowercase
 * @c: number to be checked
 *
 * Return: 1 if char is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
