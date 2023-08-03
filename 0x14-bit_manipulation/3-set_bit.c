#include "main.h"
/**
 * set_bit - sets bit at an index
 * @n: value to set
 * @index: index to set value
 * Return: set bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	*n |= mask;

	return (1);
}
