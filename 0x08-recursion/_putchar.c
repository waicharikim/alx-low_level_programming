#include <unistd.h>

/**
 *_putchar - writes the character c to stdout
 *@c: the char to print
 *return: 1 on success
 *on error, return -1 and errno is set
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
