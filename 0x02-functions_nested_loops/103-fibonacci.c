#include "main.h"
/**
 * main - prints sum of even fib numbers.
 * Return: 0 Always
 */
int main(void)
{
	unsigned long num1, num2, fib, sum, limit;

	num1 = 1;
	num2 = 2;
	limit = 4000000;
	sum = 0;

	while (num2 <= limit)
	{
		if (num2 % 2 == 0)
		{
			sum += num2;
		}

		fib = num1 + num2;

		num1 = num2;
		num2 =  fib;
	}
	printf("%lu\n", sum);
	return (0);
}
