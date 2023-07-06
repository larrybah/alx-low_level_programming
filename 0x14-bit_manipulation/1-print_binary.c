#include "main.h"
/**
 * print_binary - prints binary representation of numbers
 * @n: value to be converted
 */
void print_binary(unsigned long int n)
{
	unsigned int binary;

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	binary = n & 1;
	_putchar(binary +'0');
}
