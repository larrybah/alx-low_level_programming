#include "main.h"
/**
 * print_to_98 - print numbers up to 98
 * @n: number entered
 */
void print_to_98(int n)
{
	int i = 0;

	if (i > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d, ", i);
			if (!(i == 98))
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else if (i <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (!(i == 98))
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
