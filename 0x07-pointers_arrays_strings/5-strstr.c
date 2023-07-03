#include <stdio.h>

/**
 * _strstr - check the code
 * Description: 'Change pointer value'
 * @haystack: Pointer to variable str
 * @needle: Pointer variable
 * Return: Character
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *ptr_haystack = haystack;
		char *ptr_needle = needle;

		while (*ptr_haystack == *ptr_needle && *ptr_haystack
		!= '\0' && *ptr_needle != '\0')
		{
			ptr_haystack++;
			ptr_needle++;
		}

		if (*ptr_needle == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
