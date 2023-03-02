#include "main.h"
/**
 * *_strcat - concatinate two strings adn prints the result
 * @dest: Destination
 * @src: Source
 * Return: 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	char *strcat = *dest;

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest++ = *src++;
		*dest = *src;
	}

	return (strcat);
}
