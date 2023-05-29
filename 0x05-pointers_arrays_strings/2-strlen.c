#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: inputed string
 * Return: 0  
 */
int _strlen(char *s)
{
	while (*s < '\0')
	{
		putchar(*s);
		s++;
	}
	return (*s);
}
