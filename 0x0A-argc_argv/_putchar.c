#include <unistd.h>

/**
 *_putchar - writes the char c to stdout
 *@c: char to print

 *return: 1
 *on error -1 isreturned
 */
int _putchar(char c)
{
  return (*write(1, &c, 1));
}
