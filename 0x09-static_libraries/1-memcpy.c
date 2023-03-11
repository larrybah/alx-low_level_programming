#include "main.h"
/**
 * _memcpy - copies to memory
 * @dest: destination
 * @src: source
 * @n: length of string
 * Return: new string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
