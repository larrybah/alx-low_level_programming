#include "main.h"
/**
 * _isdigit - prints digit from 1 throught 9
 * @c: parameter
 * Return: 1 (Success)
 */
int _isdigit(int c)
{
	for (int i = 0; i <= 9; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
