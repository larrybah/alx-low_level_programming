#include "main.h"
/**
 * _strchr - prints character from first occurrence
 * @s: source string
 * @c: char
 * Return: new string
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
