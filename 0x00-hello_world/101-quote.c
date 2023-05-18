#include <unistd.h>
/**
 * main - prints text to screen
 * Return: 1 (Success)
 */
int main(void)
{
	const char *str = "and that piece of art is useful
		\" - Dora Korpar, 2015-10-19";

	write(STDOUT_FILENO, str, 60);
	return (1);
}
