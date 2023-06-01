#include "main.h"
/**
 * string_toupper - converts strings to uppercase
 * @str: string to be converted.
 * Return: string
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		*ptr = toupper(*ptr);
		ptr++;
	}
	return (str);
}
