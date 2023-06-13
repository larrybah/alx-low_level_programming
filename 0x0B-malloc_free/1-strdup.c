#include "main.h"
/**
 * _strdup - checks for duplicate string and returns a duplicate string
 * @str: string to check
 * Return: duplicate string
 */
char *_strdup(char *str)
{
	int len;
	char *duplicate;

	len = strlen(str) + 1;

	duplicate = malloc(len);

	if (dup == NULL)
	{
		return (NULL);
	}

	memcpy(dup, str, len);

	return (dup);
}
