#include "main.h"
/**
 * string_toupper - converts strings to uppercase
 * @s: parameter
 * Return: char
 */
char *string_toupper(char *s)
{
	char *r = s;

	for (; *s; s++)
		if (*s >= 'a' && *s <= 'z')
			*s += 'A' - 'a';
	return (r);
}
