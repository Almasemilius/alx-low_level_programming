#include "main.h"
#include <stdio.h>

/**
 * print_rev - check the code
 * Description: 'Change pointer value'
 * @str: Pointer to variable s
 */

void print_rev(char *str)
{
	int i;

	int j;

	j = 0;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
