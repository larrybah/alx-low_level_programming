#include "main.h"

/**
 * main - prints fibonacci numbers, the first 50
 * Return: Always 0 Success
 */
int main(void)
{
	int i, num1, num2, fib = 50;

	num1 = 1;
	num1 = 2;

	for (i = 1; i <= fib; i++)
	{
		printf("%d", num2);
		num1 = num2;
		num2 = num1 + num2;

		if (!(i == fib))
		{
			printf(", ");
		}
	}
	return (0);

}
