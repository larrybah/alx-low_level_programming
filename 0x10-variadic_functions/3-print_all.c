#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: argument types to be printed
 */
void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);

	char c;
	int i;
	float f;
	char *s;

	const char *ptr = format;

	while (*ptr)
	{
		switch (*ptr)
		{
		case 'c':
			c = (char)va_arg(args, int);
			printf("%c", c);
			break;
		case 'i':
			i = va_arg(args, int);
			printf("%d", i);
			break;
		case 'f':
			f = (float)va_arg(args, double);
			printf("%f", f);
			break;
		case 's':
			s = va_arg(args, char*);
			if (s != NULL)
			{
				printf("%s", s);
			}
			break;
		}
		if (*(++ptr) && (*ptr == 'c' || *ptr == 'i' || *ptr == 'f' || *ptr == 's'))
		{
			printf(", ");
		}
	}
	va_end(args);
	printf("\n");
}
