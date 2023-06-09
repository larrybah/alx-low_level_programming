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

	if (argc == atoi(argv[0]))
	{
		printf("0\n");
	}
	else if (argc == ' ')
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	sum = i + j;

	printf("%d\n", sum);

	return (0);
}
