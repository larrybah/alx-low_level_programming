#include "main.h"
/**
 * _isalpha - checks if a letter is an Alphabet, lowercase or UPPERCASE.
 */
int _isalpha(int c)
{
	int i, j;

	for (i = 97; i <= 122; i++)
	{
		for (j = 65; j <= 90; j++)
		{
			if (c == i || c == j)
			{
				return (1);
			}
		}
	}
	return (0);
}
