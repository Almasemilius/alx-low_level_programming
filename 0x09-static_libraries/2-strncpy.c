#include <stdio.h>

/**
 * _strncpy - check the code
 * Description: 'Change pointer value'
 * @dest: Pointer to variable str
 * @n: Pointer variable
 * @src: Pointer variable
 * Return: Character
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
