#include <stdio.h>
#include <stdlib.h>

/**
 *main - function
 *@argc: length of argv
 *@argv: number of arguments
 *
 *return: 0
 */
int main(int argc, char *argv[])
{
  int number, sum, change, aux;
  int coins[] = {25, 10, 5, 2, 1};
  number = sum = change = aux = 0;
  if (argc != 2)
    {
      printf("error\n");
      return (1);
    }
  sum = atoi(argv[1]);
  if (sum <= 0)
    {
      printf("0\n");
      return (0);

      while (coins[number] !='\0')
	{
	  if (sum >= coins[number])
	    {
	      aux = (sum / coins[number]);
	      change += aux;
	      sum -= coins[number] * aux;
	    }
	  number++;
	}
      printf("%d\n", change);
      return (0);
    }
