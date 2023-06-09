#include "main.h"
/**
 * main - adds two values from command line args
 * @argc: number of values
 * @argv: array of arguments
 * Return: 0 Always
 */
int main(int argc, char* argv[])
{
	int i, j, sum = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (0);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	sum = i + j;

	printf("%d\n", sum);

	return (0);
}
