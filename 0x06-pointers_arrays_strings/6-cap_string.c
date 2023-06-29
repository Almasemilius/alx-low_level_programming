#include <stdio.h>

/**
 * cap_string - check the code
 * Description: 'Change pointer value'
 * @str: Pointer variable
 * Return: Character
 */

char *cap_string(char *str)
{
	int capitalize = 1;
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			if (capitalize)
			{
				*ptr = *ptr - 'a' + 'A';
				capitalize = 0;
			}
		}
		else
		{
			capitalize = (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
				      *ptr == ',' || *ptr == ';' || *ptr == '.' ||
				      *ptr == '!' || *ptr == '?' || *ptr == '"' ||
				      *ptr == '(' || *ptr == ')' || *ptr == '{' ||
				      *ptr == '}');
		}

		ptr++;
	}

	return (str);
}
