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
	char *p = s;

	for (int i = 0; i < n; i++)
	{
		p[i] = b;
	}
	return (s);
}
