#include "main.h"
/**
 * main - prints minimum number of change
 * @cents: change to give
 * Return: 0 Always
 */
int calculate_minimum_coins(int cents);
int main(int argc, char *argv[])
{
	int cents, min_coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
	}
	else
	{
		min_coins = calculate_minimum_coins(cents);
		printf("%d\n", min_coins);
	}

	return (0);
}

/**
 * calculate_minimum_coins - calculates minimum coins
 * @cents: the amount of money
 * Return: coins change
 */
int calculate_minimum_coins(int cents)
{
	int i, coins = 0;
	int denomination[] = {25, 10, 5, 2, 1};
	int num_denomination = sizeof(denomination) / sizeof(denomination[0]);

	for (i = 0; i < num_denomination; i++)
	{
		coins += (cents / denomination[i]);
		cents %= denomination[i];
	}

	return (coins);
}
