#include "main.h"
/**
 * _memset - loops through the value to set memory
 * @s: pointer value to memory
 * @b: number of bytes
 * @n: bytes of memory
 * Return: size of memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
	{
		*s++ = (unsigned int)b;
	}
	return (s);
}
