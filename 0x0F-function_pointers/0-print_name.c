#include "function_pointers.h"
/**
 * print_name - prints name using callback function
 * @name: name to be printed
 * @f: function pointer that calls name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
