#include "main.h"
/**
 * get_endianness - gets endianness
 * Return: endianness
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	return ((int)(*byte));
}
