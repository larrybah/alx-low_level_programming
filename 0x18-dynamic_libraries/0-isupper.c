#include "main.h"
/**
 * _isupper - checks if character is upper
 * @c: character to be check
 * Return: 1 if is upper, if not 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
