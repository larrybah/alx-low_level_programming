#include "main.h"
/**
 * main - prints the numbers of arguments passed to a program
 * @argc: parameter that counts the number of arguments passed
 * @argv: parament of array strings passed as command line arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /* ignores argv */
	printf("%d\n", argc - 1);

	return (0);
}
