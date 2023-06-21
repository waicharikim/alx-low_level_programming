#include "function_pointers.h"
/**
 * print_name - print a name
 * @name: pointer to string
 * @f: pointer to function
 *
 * Return: void
 */
void print_name(char *name, void(*f)(char *s))
{
	f(name);
}
