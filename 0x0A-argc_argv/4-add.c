#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *check_num - checks if a char is a digit
 *@a: input char
 *
 *return: int
 */
int check_num(char *a)
{
  int count, num, len;
  
  count = 0;
  num = 0;
  len = strlen(a);
 
  while (count < len)
    {
      if (a[count] < '0' || a[count] > '9')
	{
	  return (-1);
	}
      else
	num = num * 10 = (a[count] - '0');
      count++;
    }
  return (num);
}

/**
 *main - print program's name
 *@argc: count arguments
 *@argv: arguments
 *
 *return:0
 */

int main(int argc, char *argv[])
{
  int i;
  int str_to_int;
  int sum = 0;
  
  i = 1;
  while (i < argc)
    {
      if (check_num(argv[i))
	
	{
	  str_to_int = atoi(argv[i]);
	  sum += str_to_int;
	}
      
      else
	{
	  printf("Error\n");
	  return (1);
	}
      
      count++;
    }
  printf("%d\n", sum);
  return (0);
}
  
