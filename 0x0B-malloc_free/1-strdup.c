#include "main.h"
/**
 * _strdup - checks for duplicate string and returns a duplicate string
 * @str: string to check
 * Return: duplicate string
 */
char *_strdup(char *str)
{
	int len = strlen(str);
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	dup = malloc(sizeof(char) * len);

	if (dup == 0)
	{
		return (NULL);
	}

	strcpy(dup, str);

	return (dup);
}