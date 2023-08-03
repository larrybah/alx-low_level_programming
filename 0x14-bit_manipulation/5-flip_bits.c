#include "main.h"
/**
 * flip_bits - flip from one number to another.
 * @n: n bits
 * @m: m bits
 * Return:  counts
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
