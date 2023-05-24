#include "main.h"
/**
 * jack_bauer - prints the every minute of the time in 24
 */
void jack_bauer(void)
{
	int j, i;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			printf("%02d:%02d\n", i, j);
		}
	}
}
