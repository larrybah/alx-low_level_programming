#include "main.h"
/**
 * main - calculates the multiples of a number.
 * Return: (0) Always
 */
int main(void)
{
	int number = 1024;
	int i, sum = 0;

	for (i = 0; i < number; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d", sum);
	return (0);
}
