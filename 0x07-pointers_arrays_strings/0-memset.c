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
	unsigned int mem;


	for (mem = 0; mem < n; mem++)
	{
		s[mem] = b;
	}

	return (s);
}
