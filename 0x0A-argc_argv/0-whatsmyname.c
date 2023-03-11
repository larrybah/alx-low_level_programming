#include "main.h"
/**
 * main - prints the name of the file
 * @argc: parameter that counts the number of arguments pass
 * @argv: paratmeter of array of strings passed as command line arguments
 * Return: 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
