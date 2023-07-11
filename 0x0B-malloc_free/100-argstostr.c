#include <stdlib.h>
#include <string.h>

/**
 * argstostr - converts a string to an integer
 * @ac: string to be converted
 * @av: string to be converted
 *
 * Return: the int converted from the string
 */
char *argstostr(int ac, char **av)
{
	size_t total_length, index, length;
	char *result;
	int i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}

	result = (char *)malloc((total_length + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}

	index = 0;
	for (i = 0; i < ac; i++)
	{
		length = strlen(av[i]);
		strcpy(result + index, av[i]);
		index += length;
		result[index++] = '\n';
	}

	result[total_length] = '\0';

	return (result);
}
