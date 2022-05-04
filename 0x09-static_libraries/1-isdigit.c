#include "main.h"
/**
 *_isdigit - checks if a number lies from 0-9
 *@c: input
 *Return: 1 if a number lies 0-9 otherwise 0
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
