#include "main.h"
/**
 * _strcmp - conpare two strings
 * @s1: parameter
 * @s2: parameter
 * Return: Sucess
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
		return (*s1 < *s2 ? -1 : 1);
}
