#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: character to be printed to stdout
 * Return: 1 if its a lowercase else 0.
 */
int _islower(int c)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
