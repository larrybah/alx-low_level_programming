#include "variadic_functions.h"
/**
 *
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			return;
		}
		else if (n == '\0')
		{
			printf("nil\n");
		}

		str += va_arg(args, int);
	}

	va_end(args);

	printf("\n");
}
