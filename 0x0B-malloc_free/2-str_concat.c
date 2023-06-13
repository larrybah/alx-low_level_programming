#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: pointer to string to concat
 * @s2: pointer to another string to concat
 * Return: concatenated string, if memory is allocated.
 */
char *str_concat(char *s1, char *s2)
{
	int len_s1 = 0, len_s2 = 0;
	char *_concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	_concat = malloc(sizeof(char) * (len_s1 + len_s2) + 1);

	if (_concat == NULL)
	{
		return (NULL);
	}

	strcpy(_concat, s1);
	strcat(_concat, s2);

	return (_concat);
}
