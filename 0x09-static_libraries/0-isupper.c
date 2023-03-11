#include "main.h"
/**
 * _isupper - print 1 is character is uppercase
 * @c: character c
 * Return: 1 (Success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
