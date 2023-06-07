#include "main.h"
/**
 * factorial - print the factorial of a number
 * @n: number to calculate factorial for
 * Return: -1 if n < 0 to indicate error. otherwise factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
			return (n * factorial(n - 1));
}
