#include <stdio.h>

/**
 * string_toupper - check the code
 * Description: 'Change pointer value'
 * @str: Pointer variable
 * Return: Character
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}

	return (str);
}
