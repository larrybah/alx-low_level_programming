#include "main.h"
/**
 * main - prints all the arguments it receives
 * @argc: number of arguments
 * @argv: arguments receive
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
