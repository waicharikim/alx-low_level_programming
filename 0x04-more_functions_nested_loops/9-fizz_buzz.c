#include <stdio.h>
/**
 * main - program entry
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 1; n < 101; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz ");
			continue;
		}
		if (n % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		if (n % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
		printf("%d", n);
		if (n != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
