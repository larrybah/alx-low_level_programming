#include "main.h"
/**
 * reset_to_98 - A program that reset the variable n to 98
 * @n: a parameter
 * Return: Always
 */
void reset_to_98(int *n)
{
	int *p = 98;

	p = &n;
	*p = 'b';
	_putchar('b');
}
