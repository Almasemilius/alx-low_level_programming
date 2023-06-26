#include "main.h"
#include <stdio.h>

/**
 * puts_half - check the code
 * Description: 'Change pointer value'
 * @str: Pointer to variable str
 */

void puts_half(char *str)
{

	int n, i;

	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	n = length / 2;

	if (length % 2 == 0)
	{
		for (i = n; i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = n; i < length - 1; i++)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
