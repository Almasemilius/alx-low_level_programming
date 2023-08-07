#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to file.
 * @text_content: A pointer to a string.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	mode_t filePermissions;
	ssize_t textLength;
	ssize_t bytesWritten;

	if (filename == NULL)
	{
		return (-1);
	}

	filePermissions = S_IRUSR | S_IWUSR;

	int fileDescriptor = open(filename, O_WRONLY |
	O_CREAT | O_TRUNC, filePermissions);
	if (fileDescriptor == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		textLength = strlen(text_content);
		bytesWritten = write(fileDescriptor, text_content, textLength);

		if (bytesWritten != textLength)
		{
			close(fileDescriptor);
			return (-1);
		}
	}

	close(fileDescriptor);
	return (1);
}
