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

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (strcat);
}
