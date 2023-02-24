#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14 ten times
 *
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 14; i++)
	{
		for (j = 48; j >= 57; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
