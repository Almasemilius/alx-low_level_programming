#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 * Description: 'Change pointer value'
 * @a: Pointer to variable a
 * @b: Pointer to variable b
 */

void swap_int(int *a, int *b)
{

	int tmp = *a;

	*a = *b;

	*b = tmp;
}
