#include <unistd.h>
/**
 * _putchar - writes the character c to the stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On errror, -1 is returned, the errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
