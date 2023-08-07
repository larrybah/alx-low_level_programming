#include "main.h"
/**
 * read_textfile - reads a text file
 * @filename: file name
 * @letters: letters in the file
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t bytes_read, bytes_written;
	FILE *file;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	buffer = (char *)malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	bytes_read = fread(buffer, sizeof(char), letters, file);
	if (bytes_read <= 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written != bytes_read)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	fclose(file);
	free(buffer);

	return (bytes_read);
}
