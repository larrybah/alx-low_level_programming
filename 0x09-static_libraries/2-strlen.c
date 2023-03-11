#include "main.h"
/**
 * _strlen - prints the lenght of a string
 * @s: parameter
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s += 1;
	}
	return (length);
}
