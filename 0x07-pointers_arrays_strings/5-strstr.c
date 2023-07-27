#include "main.h"
/**
 * _strstr - locates the substring in a string.
 * @haystack: string
 * @needle: substring.
 * Return: substring.
 */
char *_strstr(char *haystack, char *needle)
{
	char *hay_ptr, *needle_ptr;

	if (!haystack || !needle)
	{
		return (NULL);
	}
	while (*haystack)
	{
		hay_ptr = haystack;
		needle_ptr = needle;
		while (*hay_ptr && *needle_ptr && *hay_ptr == *needle_ptr)
		{
			hay_ptr++;
			needle_ptr++;
		}
		if (!(*needle_ptr))
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
