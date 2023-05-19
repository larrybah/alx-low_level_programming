#include <stdio.h>
/**
 * main - print alphabets using ASCII except e and q
 * Return: Always 0 (Success)
 */
int main()
{
	int a = 97;

	while (a <= 122)
	{
		if (a != 101 && a != 113)
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');

	return (0);
}
