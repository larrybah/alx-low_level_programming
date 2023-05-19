#include <stdio.h>
/**
 * main - prints all numbers of base16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 48, num2 = 97;

	while (num < 57)
	{
		putchar(num);
		num++;
	}
	while (num2 <= 102)
	{
		putchar(num2);
		num2++;
	}
	putchar('\n');

	return (0);
}
