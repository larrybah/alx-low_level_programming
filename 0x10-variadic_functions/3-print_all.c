#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: argument types to be printed
 */
void print_all(const char * const format, ...)
{
	int i;
	float f;
	char *s;

	va_list list;

	va_start(list, format);

	while (*format)
	{
		switch (*format + 1)
		{
			case 's':
				s = va_arg(list, char *);
				if (s != NULL)
				{
					printf("%s\n", s);
				}
				else
					printf("(nil\n)");
				break;
			case 'i':
				i = va_arg(list, int);
				printf("%d\n", i);
				break;
			case 'f':
				f = va_arg(list, float);
				printf("%f\n", f);
				break;
			case 'c':
				c = va_arg(list, char);
				printf("%c", c);
				break;
		}
	}

	va_end(list);

	printf("\n");
}
