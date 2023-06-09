#include <stdio.h>
#include <stdlib.h>
/**
 * main - add 2 integers
 *
 * @argc: - no of arguments
 * @argv: - pointer to arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int result;
	int i;
	int j;
	char s;

	result = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; argc != 1; i++, argc--)
	{
		for (j = 0; argv[i][j]; j++)
		{
			s = argv[i][j];
			if ((s > 96 && s < 123) || (s > 64 && s < 91))
			{
				printf("Error\n");
				return (1);
			}
		}
		result = result + atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
