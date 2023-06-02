#include "main.h"
/**
 * reverse_array - prints array in reverse order
 * @a: name of array
 * @n: array elements
 */
void reverse_array(int *a, int n)
{
	int temp, start, end;

	start = 0;
	end = n - 1;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}

	for (; temp < n; temp++)
	{
		_putchar(a[temp]);
	}
}
