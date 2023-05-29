#include "main.h"

/**
[ * rev_string - reverse a string
 * @s: pointer to the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int len;
	char temp;

	len = _strlen(s);
	s  = s + len - 1;

	while (len)
	{
		ch = *s;
		s--;
		len--;
	}
}
/**
* calculate the length of the string
 */
int _strlen(char *s)
{
        int len;

        for (len = 0; *s != '\0'; s++)
                len++;
        return (len);
}
