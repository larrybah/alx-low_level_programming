#include "main.h"
/**
 * _strncpy - copy string to destination
 * @dest: destination
 * @src: sourcce
 * @n: number of bytes
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *r = dest;

	while (*src && n)
	{
		*dest++ = *src++;
		n--;
	}
	while (n--)
		*dest++ = '\0';
	return (r);
}
