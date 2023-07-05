#include <stdio.h>

/**
 * _strlen_recursion - check the code
 * Description: 'Recursion function'
 * @s: Pointer to variable str
 * Return: Always null
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return 0;
	}

	return 1 + _strlen_recursion(s + 1);
}
