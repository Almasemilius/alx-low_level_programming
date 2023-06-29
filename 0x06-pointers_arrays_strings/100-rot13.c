#include <stdio.h>

/**
 * rot13 - check the code
 * Description: 'Change pointer value'
 * @str: Pointer variable
 * Return: Character
 */
char *rot13(char *str)
{
	char *ptr = str;
	char *result = str;

	while (*ptr != '\0')
	{
		if ((*ptr >= 'a' && *ptr <= 'm') || (*ptr >= 'A' && *ptr <= 'M'))
		{
			*result = *ptr + 13;
		}
		else if ((*ptr >= 'n' && *ptr <= 'z') || (*ptr >= 'N' && *ptr <= 'Z'))
		{
			*result = *ptr - 13;
		}
		else
		{
			*result = *ptr;
		}

		ptr++;
		result++;
	}

	*result = '\0';

	return (str);
}
