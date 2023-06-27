#include "variadic_functions.h"
void print_all(const char *format, ...);
/**
 * print_all - prints everything
 * @format: type of specifier given
 */
void print_all(const char *format, ...)
{
	char c, *s;
	int i;
	double f;
	va_list args;

	va_start(args, format);

	while (format && *format)
	{
		switch (*format)
		{
			case 'c':
			{
				c = (char)va_arg(args, int);
				printf("%c", c);
				break;
			}
			case 'i':
			{
				i = va_arg(args, int);
				printf("%d", i);
				break;
			}
			case 'f':
			{
				f = va_arg(args, double);
				printf("%f", (float)f);
				break;
			}
			case 's':
			{
				s = va_arg(args, char *);
				if (s != NULL)
					printf("%s", s);
				break;
			}
			default:
				break;
		}
		format++;
		if (*format && (*format == 'c' || *format == 'i'
					|| *format == 'f' || *format == 's'))
			printf(", ");
	}
	va_end(args);
	printf("\n");
}
