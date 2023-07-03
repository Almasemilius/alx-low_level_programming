#include <stdio.h>

/**
 * _strpbrk - check the code
 * Description: 'Change pointer value'
 * @s: Pointer to variable str
 * @accept: Pointer variable
 * Return: Character
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *ptr_accept = accept;

		while (*ptr_accept != '\0')
		{
			if (*s == *ptr_accept)
			{
				return (s);
			}
			ptr_accept++;
		}
		s++;
	}
	return (NULL);
}
