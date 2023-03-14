#include "main.h"
/**
 * _strdup - prints the duplicate of a string
 * @str: parameter for duplicate string
 * Return: Success
 */
char *_strdup(char *str)
{
	char *s;

	s = malloc(strlen(str) + 1);

	if (s == NULL)
		return (NULL);
	strcpy(s, str);
	return (s);
}
