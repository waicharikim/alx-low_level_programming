#include <stdio.h>

/**
 * main - print argument count
 * @argc: argument count
 * @argv: pointer to arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (*argv)
	{
		argc--;
		printf("%d\n", argc);
	}
	return (0);
}
