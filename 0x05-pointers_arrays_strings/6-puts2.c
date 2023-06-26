#include "main.h"
#include <stdio.h>

/**
 * puts2 - check the code
 * Description: 'Change pointer value'
 * @str: Pointer to variable str
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
