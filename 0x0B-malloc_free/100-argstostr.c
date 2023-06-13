#include "main.h"
#include <stdlib.h>
/**
 * argstostr - xoncantenate all arguments
 * @ac: argument count
 * @av: pointer to argument string
 *
 * Return: pointer to string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int count;
	char **len;
	int i;
	int j;
	int n;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = av;
	count = 0;
	for(i = 0; i < ac; i++)
	{
		for (j = 0; len[i][j]; j++, count++);
	}
	str = malloc(sizeof(char) * count + ac);
	if (str != NULL)
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0, n = 0; av[i][j]; j++, n++)
			       str[n]  = av[i][j];
			str[n] = '\n';
		}
		return (str);
	}
	else
		return (NULL);
}
