#include "main.h"
/**
 * _strncat - concaates two strings
 * @dest: destination
 * @src: source
 * @n: size
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	char *r = dest;

	while (*dest)
		dest++;
	while (*src && n--)
		*dest++ = *src++;
	*dest = '\0';
	return (r);
}
