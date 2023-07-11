#include <stdlib.h>

/**
 * _strdup - converts a string to an integer
 * @str: string to be converted
 *
 * Return: the int converted from the string
 */
char *_strdup(char *str)
{
	size_t len, i;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	duplicate = (char *)malloc((len + 1) * sizeof(char));
	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		duplicate[i] = str[i];
	}

	return (duplicate);
}
