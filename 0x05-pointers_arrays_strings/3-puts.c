#include "main.h"
#include <stdio.h>

/**
 * _puts - check the code
 * Description: 'Change pointer value'
 * @str: Pointer to variable s
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
