#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it.
 * @filename: A pointer to the the file.
 * @letters: The number of letters.
 * Return: 0 if file cannot be opened, 0 if file name is null
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a, b, c;
	char *tmp;

	if (filename == NULL)
		return (0);

	tmp = malloc(sizeof(char) * letters);
	if (tmp == NULL)
		return (0);

	a = open(filename, O_RDONLY);
	b = read(a, tmp, letters);
	c = write(STDOUT_FILENO, tmp, b);

	if (a == -1 || b == -1 || c == -1 || c != b)
	{
		free(tmp);
		return (0);
	}

	free(tmp);
	close(a);

	return (c);
}
