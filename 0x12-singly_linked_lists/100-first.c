#include "lists.h"
/**
 * prints_str - prints a string before the executions of main.
 */
void prints_str(void) __attribute__((constructor));
void prints_str(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
