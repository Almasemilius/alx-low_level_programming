#include <stdio.h>

/**
 * _strspn - check the code
 * Description: 'Change pointer value'
 * @s: Pointer to variable str
 * @accept: Pointer variable
 * Return: Character
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	char *ptr_s = s;

	while (*ptr_s != '\0')
	{
		char *ptr_accept = accept;
		int isMatch = 0;

		while (*ptr_accept != '\0')
		{
			if (*ptr_s == *ptr_accept)
			{
				isMatch = 1;
				break;
			}
			ptr_accept++;
		}

		if (isMatch == 0)
		{
			break;
		}

		length++;
		ptr_s++;
	}

	return (length);
}
