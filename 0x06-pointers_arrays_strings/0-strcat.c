#include "main.h"
/**
 * *_strcat - concatinate two strings adn prints the result
 * @dest: Destination
 * @src: Source
 * Return: Pointer to destination
 */
char *_strcat(char *dest, char *src)
{
	return (strcat(*dest, *src));
}
