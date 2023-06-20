#include <unistd.h>
/**
 * _putchar - writes the characterr c to the stdout
 * @c: The character to print
 *
 * Return: On success 1
 * On error, -1 is returned, and errrno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
