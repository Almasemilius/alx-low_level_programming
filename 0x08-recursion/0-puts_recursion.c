#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - check the code
 * Description: 'Recursion function'
 * @s: Pointer to variable str
 * Return: Always null
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
