#include "main.h"
/**
 * _strchr - searches for a character in a string
 * @s: pointer to the string
 * @c: character to search for
 * Return: character if found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (c == *s)
			return (s);
		s++;
	}
	return ('\0');
}
