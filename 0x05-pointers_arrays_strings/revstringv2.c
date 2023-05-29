#include "main.h"

/**
 * print_rev - print a string in reverse and a new line
 * @s: pointer to string to be printed
 *
 * Return: void
 */
int _strlen(char *s);

void print_rev(char *s)
{
	int len;
	char rev_s[10];
	int i;

	len = _strlen(s);

	if (len > 0)
		s = s + (len - 1);
	i = 0;
	while (len)
	{
		rev_s[i] = *s;
		i++;
		s--;
		len--;
	}
	rev_s[i] = '\0';
	s = rev_s;
}
/**
 * function for calculating lenth of the string
 */
int _strlen(char *s)
{
        int len;

        for (len = 0; *s != '\0'; s++)
                len++;
        return (len);
}
