#include "main.h"
/**
 * main - prints minimum number of change
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 Always
 */
int main(int argc, char* argv[])
{
	int i, cents, num_coins = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	for (i = 0; i < sizeof(coins) / sizeof(coins[0]); i++)
	{
		num_coins += cents / coins[i];
		cents %= coins[i];
	}

	printf("%d\n", num_coins);
	return (0);
}
