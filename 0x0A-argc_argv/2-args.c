#include <stdio.h>

/**
 * main - print program's name
 * @argc - no of arguments
 * @argv - pointer to arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
