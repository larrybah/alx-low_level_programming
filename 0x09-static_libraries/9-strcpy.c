#include "main.h"
/**
 * _strcpy - copies string from src to dest
 * @src: copy from src
 * @dest: to dest
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i < (src[i] != '\0'); i++)
	{
		dest[i] = src[i];
		for (i = src[0]; i < (dest[i] - 1); i++)
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}
