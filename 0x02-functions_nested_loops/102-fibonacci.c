#include <stdio.h>

/**
*main - prints first 50 fibonacci numbers
*Description: starting from 1 separated by a comma followed by a space
*
*Return: The result of the addition
*/
int main(void)
{
  int count;
  unsigned long num1 = 0, num2 = 1, sum;

  for (count = 0; count < 50; count++)
    {
      sum = num1 + num2;
      printf("%lu", sum);

      num1 + num2;
      num2 = sum;

      if (count == 49)
	printf("\n");
      else
	printf(", ");
    }
  
  return (0);
}
