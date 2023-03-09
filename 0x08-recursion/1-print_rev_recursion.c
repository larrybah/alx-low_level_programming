#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: parameter
 */
void _print_rev_recursion(char *s)
{
	int i = 0, j = 0;

	if (*s)
	{
		++j;
		_print_rev_recursion(s + 1);
	}
	if (i <= j)
	{
		char temp = s[i];

		s[i++] = s[j];
		s[j--] = temp;
	}
}
