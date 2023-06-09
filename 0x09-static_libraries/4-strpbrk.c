#include "main.h"
/**
 * _strpbrk - search for string and finds a matching character
 * @s: pointer pointin to the string you want to search
 * @accept: a pointer holding the address to the characters to be check for.
 * Return: index in found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *ptr;

		ptr = accept;
		while (*ptr != '\0')
		{
			if (*s == *ptr)
			{
				return (s);
			}
			ptr++;
		}
		s++;
	}
	return (NULL);
}
