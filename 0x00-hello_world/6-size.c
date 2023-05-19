/**
 * main - program entry
 *
 * Description: prints sizes of different data types
 * Return: 0 (success)
*/
#include <stdio.h>

int main(void)
{
	long int a;
	long long int b;
	float c;

	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of a int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(a));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(b));
	printf("Size of a float: %lu byte(s)\n", sizeof(c));

	return (0);
}
