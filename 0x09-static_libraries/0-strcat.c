#include "main.h"
/**
 * *_strcat - concatenate two strings
 * @dest: destination to be added
 * @src: source to added
 * Return: dest after concatenating dest and src
 */
char *_strcat(char *dest, char *src)
{
int dest_len = strlen(dest);
	int i;

	for (i = 0; i < (src[i] != '\0'); i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
