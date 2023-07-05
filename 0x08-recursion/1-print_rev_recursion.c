#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - check the code
 * Description: 'Recursion function'
 * @s: Pointer to variable str
 * Return: Always null
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
