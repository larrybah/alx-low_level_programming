#include "main.h"
/**
 * _memcpy - copies memory regardless of data type from src to dest.
 * @dest: pointer pointint to the destination address
 * @src: pointerr pointing to the src address
 * @n: number of bytes to be copied
 * Return: destination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
