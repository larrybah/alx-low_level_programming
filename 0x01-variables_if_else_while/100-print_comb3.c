#include <stdio.h>
/**
 * main - prints a series of two numbers starting 01 - 89
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j;

	while (i <= 8)
	{
		j = i + 1;

		while (j <= 9)
		{
			if (i != 8 || j != 9)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
}
