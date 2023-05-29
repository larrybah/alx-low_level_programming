#include "main.h"
/**
 * _atoi - converts strings to integers
 * @s: string to be converted
 * Return: integer value.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	bool foundNumber = false;

	while (*s == ' ')
	{
		s++;
	}

	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		foundNumber = true;

		if (result > INT_MAX / 10 ||
				(result == INT_MAX / 10 && (*s - '0') > INT_MAX % 10))
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}
		result = result * 10 + (*s - '0');
		s++;
	}

	if (!foundNumber)
		return (0);

	return (sign * result);
}
