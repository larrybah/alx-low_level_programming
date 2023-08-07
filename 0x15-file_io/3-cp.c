#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success
 */

int main(int argc, char **argv)
{
	char off[BUFSIZ];
	int bytes, min1, min2;

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	min1 = open(argv[1], O_RDONLY);
	if (min1 == -1)
		dprintf(STDERR_FILENO, ERR_READ, argv[1]), exit(98);

	min2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (min2 == -1)
		dprintf(STDERR_FILENO, ERR_WRITE, argv[2]), exit(99);

	while ((bytes = read(min1, off, BUFSIZ)) > 0)
		if (write(min2, off, bytes) != bytes)
			dprintf(STDERR_FILENO, ERR_WRITE, argv[2]), exit(99);

	if (bytes == -1)
		dprintf(STDERR_FILENO, ERR_READ, argv[1]), exit(98);

	min1 = close(min1);
	if (min1)
		dprintf(STDERR_FILENO, ERR_CLOSE, min1), exit(100);

	min2 = close(min2);
	if (min2)
		dprintf(STDERR_FILENO, ERR_CLOSE, min2), exit(100);

	return (0);

}
