#include "main.h"
/**
 * reverse_array - reverse an integer
 * @a: parameter
 * @n: size
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = *(a + b);
		*(a + b) = *(a + n - b - 1);
		*(a + n - b - 1) = temp;
	}
}
