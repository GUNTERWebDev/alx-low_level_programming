#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make
 * change for an amount of money
 * @argc: arguments count
 * @argv: arguments vector (array of strings)
 * Return: 0 (Success) | 1 (Failure)
 */
int main(int argc, char *argv[])
{
	int	amount, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);
	coins = 0;
	for (; amount > 0; coins++)
	{
		if (amount >= 25)
		{
			amount -= 25;
		}
		else if (amount >= 10)
		{
			amount -= 10;
		}
		else if (amount >= 5)
		{
			amount -= 5;
		}
		else if (amount >= 2)
		{
			amount -= 2;
		}
		else if (amount >= 1)
		{
		amount -= 1;
		}
	}
	printf("%d\n", coins);
	return (0);
}
