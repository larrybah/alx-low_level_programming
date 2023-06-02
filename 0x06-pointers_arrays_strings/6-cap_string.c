#include "main.h"
/**
 * cap_string - capitalize each letter of a string
 * @str: capitalized string
 */
char *cap_string(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr == str[0])
		{
			ptr++;
		}
	}
	return (str);
}
