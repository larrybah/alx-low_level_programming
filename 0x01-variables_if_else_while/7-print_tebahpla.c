#include <stdio.h>
/**
 * main - print lowercase alphabet in reverse order.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int z  = 122;

	while (z >= 97)
	{
		putchar(z);
		z--;
	}
	putchar('\n');

	return (0);
}
