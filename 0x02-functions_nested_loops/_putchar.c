#include <unistd.h>

/**
*main - entry point
*
*Return: always 0 (success)
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
