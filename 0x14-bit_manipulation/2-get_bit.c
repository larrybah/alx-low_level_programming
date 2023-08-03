#include "main.h"
/**
 * get_bit - gets bit at a given index
 * @n: value to get
 * @index: at this index
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask, bit;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	bit = n & mask;

	return ((bit != 0) ? 1 : 0);
}
