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
	if (argc != 0)
		printf("%s\n", *argv);
	return (0);
}
