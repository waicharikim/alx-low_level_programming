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

	for (i = 0; i < len/2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
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
