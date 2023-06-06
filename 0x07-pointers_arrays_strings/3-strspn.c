#include "main.h"
/**
 * _strspn - goes through string and finds accepted string.
 * @s: pointer to the string
 * @accept: pointer to accepted string
 * Return: length of string from accepted.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		i++;
		s++;
	}

	return (i);
}
