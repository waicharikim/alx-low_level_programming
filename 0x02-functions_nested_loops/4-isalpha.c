#include "main.h"
/**
 * _isalpha - checks for alphabetic characters
 * @c: character to be checked
 *
 * Return: 1 if its a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 90))
		return (1);
	else
		return (0);
}
