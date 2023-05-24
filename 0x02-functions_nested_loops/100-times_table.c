#include "main.h"
/**
 * print_times_table - prints times table n times.
 * @n: parameter, times table.
 */
void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
	{
		return;
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				printf("%2d", i * j);

				if (!(j == n))
				{
					printf(", ");
				}
			}
			printf("\n");
		}
	}
}
