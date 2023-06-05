#include "main.h"
/**
 * _memset - setting a block of memory for a specified value.
 * @s: pointer pointint to the memory block
 * @b: the value to be set each time
 * @n: the number of values to be set
 * Return: pointer to orignal memory block.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	char *ptr;
	ptr = &b;

	for (i = 0; i < n; i++)
	{
		if (s == ptr)
		{
			_putchar(b + 1);
			_putchar(' ');
		}
	}

	return (s);
}
