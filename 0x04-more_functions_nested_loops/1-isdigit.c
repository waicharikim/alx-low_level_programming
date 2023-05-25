#include "main.h"
/**
 * _isdigit - check for digits 0 theough 9
 * @c: number to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c);
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
