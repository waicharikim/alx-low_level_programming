#include <unistd.h>

/**
* _putchar - writes the character c to stdout
* @C: the character to print.
*
*Return: 1 otherwise -1 for error and set errno
*/

int _putchar(char c)
{
  return (write(1, &c, 1));
}
