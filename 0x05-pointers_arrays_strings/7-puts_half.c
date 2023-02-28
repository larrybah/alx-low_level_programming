#include "main.h"
/**
 * puts_half - prints half of string
 * @str: parameter
 * Return: void
 */
void puts_half(char *str)
{
	int index = 0, len = 0, n;

	while (str[index++])
		len = len + 1;
	if ((len % 2) == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;

	for (index = n; index < len; index++)
		_putchar(str[index]);

	_putchar('\n');
}
