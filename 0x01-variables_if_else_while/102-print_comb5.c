#include <stdio.h>
/**
 * main - program entry
 *
 * Description: program that prints all combinations of three digit numbers
 * Return: 0
 */
int main(void)
{
	int num1;
	int num2;
	int dig1;
	int dig2;
	int dig_1;
	int dig_2;

	for (num1 = 0; num1 < 99; num1++)
	{
		for (num2 = num1 + 1; num2 < 100; num2++)
		{
			dig1 = (num1 / 10);
			dig2 = (num1 % 10);
			dig_1 = (num2 / 10);
			dig_2 = (num2 % 10);
			if (dig1 == dig_2 && dig2 == dig_1)
				continue;
			putchar(dig1 + 48);
			putchar(dig2 + 48);
			putchar(' ');
			putchar(dig_1 + 48);
			putchar(dig_2 + 48);
			if (num1 == 98 && num2 == 99)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
