#include "main.h"
/**
 * append_text_to_file - appends text to file
 * @filename: file name
 * @text_content: text content of file
 * Return: 1 on success and -1 on failure
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		bytes_written = write(file, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
