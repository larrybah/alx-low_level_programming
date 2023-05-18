#include <unistd.h>
/**
 * main - prints text to screen
 * Return: 1 (Success)
 */
int main(void)
{
	const char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDOUT_FILENO, str, 59);
	return (1);
}
