#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *main - performs simple operations
 *@argc: number of arguments passed
 *@argv: array of pointers to arguments
 *
 *Return: ALways 0.
 */
int main(int argc, char *argv[])
{
  int a, b, c;
  char p;
  int (*f)(int, int);
  if (argc != 4)
    {
      printf("Error\n");
exit(98);
    }
  a = atoi(argv[1]);
  b = atoi(argv[3]);
  f = get_op_func(argv[2]);
  if (!f)
    {
      printf("Error\n");
      exit(99);
    }
  p = *argv[2];

  if ((p == '/' || p == '%') && b == 0)
    {
  printf("Error\n", c);
  exit(100);
    }
  c = f(a , b);
  printf("%d\n", c);
  
  return (0);
}
