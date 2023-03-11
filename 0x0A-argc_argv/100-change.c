#include <stdio.h>
#include <stdlib.h>

/**
 * main - Finds the amount on change of cents in a money
 * e.g 101cents == 5 (4/25 cents + 1 * 1)
 * @argc: count of arguements
 * @argv: input arguement to find change of
 * Return: 0 always success or 1 Error
 */

int main(int argc, char *argv[])
{
	int money, n_change = 0;

	if (argc == 2)
	{
		money = atoi(argv[1]);
		if (money >= 25)
		{
			n_change += money / 25;
			money = money % 25;
		}
		if (money >= 10)
		{
			n_change += money / 10;
			money = money % 10;
		}
		if (money >= 5)
		{
			n_change += money / 5;
			money = money % 5;
		}
		if (money >= 2)
		{
			n_change += money / 2;
			money = money % 2;
		}
		if (money == 1)
		{
			n_change += 1;
			money = money - 1;
		}
		printf("%d\n", n_change);
		return (0);
	}
	printf("Error\n");
	return (1);
}
