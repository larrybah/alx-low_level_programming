#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: character to compare
 * @s2: characters to compare
 * Return: compared string
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
