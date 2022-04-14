#include <stdio.h>

/**
*main - prints the sum of even valued fibonacci numbers
*
*Return: The result of the addition
*/
int main(void)
{
  unsigned long num1 = 0, num2 = 1, sum1;
  float totsum

    while(1)
      {
	sum1 = num1 + num2;
	if (sum1 > 4000000)
	    break;

	if ((sum1 % 2) == 0)
	  totsum += sum1;

	num1 = num2;
	num2 = sum1;
      }
  printf("%.0f\n", totsum);
  
return (0);
}
