#include "main.h"
/**
 * swap_int - swaps values of a and b
 * @a: parameter value to be swap
 * @b: parameter value to be swap
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
