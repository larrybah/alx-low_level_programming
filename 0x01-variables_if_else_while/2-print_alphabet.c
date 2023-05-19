#include <stdio.h>
/**
 * main - putchar single character each time its called in while loop
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
