#include <stdlib.h>

/**
 * str_concat - converts a string to an integer
 * @s1: string to be converted
 * @s2: string to be converted
 *
 * Return: the int converted from the string
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1, len2, len, i;

	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}

	len = len1 + len2 + 1;

	result = (char *)malloc(len * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		result[len1 + i] = s2[i];
	}
	result[len1 + len2] = '\0';
	return (result);
}
