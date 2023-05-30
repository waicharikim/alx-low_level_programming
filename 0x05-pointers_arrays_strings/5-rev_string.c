#include "main.h"

/**
 * rev_string -  reverse a string
 * @s: pointer to string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len;
	int i;
	char *start;
	char *end;
	char temp;

	len = _strlen(s);
	start = s;
	end = s + (len - 1);

	for (i = 0; i < len/2; i++)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}

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
