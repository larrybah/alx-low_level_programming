#include "main.h"
/**
 * main - prints the product of two numbers
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int x, y, result = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	result = x * y;

	printf("%d\n", result);

	return (0);
}
