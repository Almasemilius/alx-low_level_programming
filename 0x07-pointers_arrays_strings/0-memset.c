#include <stdio.h>

/**
 * _memset - check the code
 * Description: 'Change pointer value'
 * @s: Pointer to variable str
 * @b: Pointer variable
 * @n: Pointer variable
 * Return: Character
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}