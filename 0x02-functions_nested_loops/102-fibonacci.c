#include "main.h"

/**
 * main - prints fibonacci numbers, the first 50
 * Return: Always 0 Success
 */
int main(void)
{
	unsigned long int num1, num2, fib;
	unsigned long int i, number;
	
	number = 50;
	num1 = 1;
	num2 = 2;

	printf("%lu, %lu", num1, num2);

	for (i  = 2; i <= number; i++)
	{
		fib = num1 + num2;

		printf(", %lu", fib);

		num1 = num2;
		num2 = fib;
	}
	printf("\n");
	return (0);

}
