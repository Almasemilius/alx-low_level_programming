#include <stdio.h>

/**
 * print_array - check the code
 * Description: 'Change pointer value'
 * @a: Pointer to variable str
 * @n: Pointer variable
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
