#include "main.h"
/**
 * create_array - creates an array of strings
 * @size: parameter, size of memory
 * @c: parameter, strings
 * Return: (Success)
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	else if (size == 0)
	{
		return (NULL);
	}

	i = 0;

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	/* s[i] = '\0'; */

	return (s);
}
