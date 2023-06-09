#include <stdio.h>
#include <stdlib.h>

/**
 * main - print min number of coins to make change
 * @argc: - no of arguments
 * @argv: - pointer to arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int money;
	int cent_10;
	int cent_2;
	int coins;
	int cent_1;

	money = atoi(argv[1]);
	coins = 0;
	cent_10 = 0;
	cent_2 = 0;
	cent_1 = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	if (money < 0)
	{
		printf("0\n");
		return (0);
	}
	if (money / 25)
	{
		coins = money / 25;
		money = money - (coins * 25);
	}
	if (money / 10)
	{
		cent_10 = money / 10;
		coins = coins + (money / 10);
		money = money - (cent_10 * 10);
	}
	if (money / 2)
	{
		cent_2 = money / 2;
		coins = coins + (money / 2);
		money = money - (cent_2 * 2);
	}
	cent_1 = money / 1;
	coins = coins + (money / 1);
	money = money + (cent_1 * 1);
	printf("%d\n", coins);
	return (0);

}
