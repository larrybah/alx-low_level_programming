#include "main.h"
#include <math.h>
/**
 * main - checks for the largest prime factor for the value number 
 * @number: value to check from
 * @i: iterable value
 * @largest_factor: largest prime factor
 * Return: 0 on Success
 */

int main(void)
{
	unsigned long number = 612852475143;
	unsigned long largest_factor = -1;
	unsigned long i;

	while (number % 2 == 0)
	{
		largest_factor = 2;
		number /= 2;
	}

	for (i = 3; i <= sqrt(number); i+=2)
	{
		while (number % i == 0)
		{
			largest_factor = i;
			number /= i;
		}
	}

	if (number > 2)
	{
		largest_factor = number;
	}

	printf("%lu\n", largest_factor);

	return (0);
}
