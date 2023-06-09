#include "main.h"
/**
 * main - prints number of arguments passed
 * @argc: number of arguments
 * @argv: command value
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
