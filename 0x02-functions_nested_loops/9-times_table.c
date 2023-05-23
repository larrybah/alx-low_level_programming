#include "main.h"

/**
 * times_table - prints timetable from 0 to 9x
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			printf("%d, ", (j * i));
		}

		printf("\n");
	}
}
