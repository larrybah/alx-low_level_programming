#include <stdio.h>
/**
 * main - print number of base10 from 0 - 9
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%d", number);
		number++;
	}

	return (0);
}
