#include "main.h"
/**
 * _strdup - prints the duplicate of a string
 * @str: parameter for duplicate string
 * Return: Success
 */
char *_strdup(char *str)
{
	char *s;

	s = malloc(s * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		s = strdup(s);
	}
	
	return (s)
}
