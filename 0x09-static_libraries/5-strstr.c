#include "main.h"
/**
 * _strstr - find first occurence of a substring
 * @haystack: string to searched for
 * @needle: - the substring to find
 * Return: pointer to first matching substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int a;

	while (*haystack)
	{
		for (a = 0; *(needle + a); a++)
		{
			if (*(needle + a) != *(haystack + a))
				break;
		if ((!*needle + a))
			return (haystack);
		haystack++;
		}
	}
	return (NULL);
}
