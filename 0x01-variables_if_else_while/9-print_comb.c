#include <stdio.h>
/**
 * main - prints combination of numbers in ascending order
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers = 48;

	while (numbers <= 57)
	{
		putchar(numbers);
		putchar(',');
		putchar(' ');
		numbers++;
	}
	putchar('\n');

	return (0);
}
