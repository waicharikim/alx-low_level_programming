#include <unistd.h>

/**
 * _putchar - writes char c to stdout
 * @c: char to print
 *
 *return: 1 on success
 * on error returns -1, errno is set
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
