#include <unistd.h>

/**
 *_putchar - writes the character c to stdout
 *@c: the char to be printed
 *
 *return: 1 on success
 *-1 on error and errno is set
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
