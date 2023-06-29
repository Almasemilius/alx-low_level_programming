#include <stdio.h>

/**
 * _strcat - check the code
 * Description: 'Change pointer value'
 * @dest: Pointer to variable str
 * @src: Pointer variable
 * Return: Character
 */

char *_strcat(char *dest, char *src)
{
	char *destPtr = dest;

	while (*destPtr != '\0')
	{
		destPtr++;
	}

	while (*src != '\0')
	{
		*destPtr = *src;
		destPtr++;
		src++;
	}

	*destPtr = '\0';

	return (dest);
}
