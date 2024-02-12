#include "holberton.h"

/**
 * read_textfile - a function that reads a text fl and prints it
 *
 * @fn: is the fl to read
 * @chars: number of chars to read and print from fl
 *
 * Return: 0 if it fails or actual number of chars it could
*/
ssize_t read_textfile(const char *fn, size_t chars)
{
	int fl;
	ssize_t rc, wc;
	char *buffer;

	if (fn == NULL) 
		return (0);

	fl = open(fn, O_RDONLY); 

	if (fl == -1)
		return (0);

	/*get the size of buffer from number of chars*/
	buffer = malloc(sizeof(char) * chars);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	rc = read(fl, buffer, chars); 
	if (rc == -1) 
		return (0);

	wc = write(STDOUT_FILENO, buffer, rc); 
	if (wc == -1 || rc != wc) 
		return (0);

	free(buffer);

	close(fl); 

	return (wc);
}
