#include <stdio.h>

/**
 * _strncat - check the code
 * Description: 'Change pointer value'
 * @dest: Pointer to variable str
 * @n: Pointer variable
 * @src: Pointer variable
 * Return: Character
 */

char *_strncat(char *dest, char *src, int n)
{
	char *destPtr = dest;

	while (*destPtr != '\0')
	{
		destPtr++;
	}
	while (*src != '\0' && n > 0)
	{
		*destPtr = *src;
		destPtr++;
		src++;
		n--;
	}
	*destPtr = '\0';
	return (dest);
}
