#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int file_write;
	int file_length;

	file_length = 0;
	if (!filename)
	{
		return (-1);
	}
	if (text_content)
	{
		for (; text_content[file_length];)
			file_length++;
	}
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	file_write = write(file, text_content, file_length);
	if (file == -1 || file_write == -1)
	{
		return (-1);
	}
	close(file);
	return (1);
}
