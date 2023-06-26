#include "main.h"
#include <stdio.h>

/**
 * puts2 - check the code
 * Description: 'Change pointer value'
 * @str: Pointer to variable str
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
