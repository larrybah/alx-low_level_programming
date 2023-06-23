#include <stdio.h>
#include <stdarg.h>

void print_all(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	char *ptr;
	ptr = format;

	while (*ptr)
	{
		switch (*ptr)
	{
	case 'c':
	{
		char c = (char)va_arg(args, int);
		printf("%c", c);
		break;
	}
	case 'i':
	{
            int i = va_arg(args, int);
            printf("%d", i);
            break;
        }
        case 'f':
        {
            double d = va_arg(args, double);
            printf("%f", (float)d);
            break;
        }
        case 's':
        {
            char *s = va_arg(args, char *);
            if (s != NULL)
                printf("%s", s);
            break;
        }
        }

        ptr++;
        if (*ptr && (*ptr == 'c' || *ptr == 'i' || *ptr == 'f' || *ptr == 's'))
            printf(", ");
    }

    va_end(args);
    printf("\n");
}
