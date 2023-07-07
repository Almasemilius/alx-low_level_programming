#include <stdio.h>

/**
 * _memcpy - check the code
 * Description: 'Change pointer value'
 * @dest: Pointer to variable str
 * @src: Pointer variable
 * @n: Pointer variable
 * Return: Character
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	char *destination = dest;

	char *source = src;

	for (m = 0; m < n; m++)
	{
		destination[m] = source[m];
	}
	return (dest);
}
