#include <stdio.h>

/**
 * _strcmp - check the code
 * Description: 'Change pointer value'
 * @s1: Pointer to variable str
 * @s2: Pointer variable
 * Return: Always Integer
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
