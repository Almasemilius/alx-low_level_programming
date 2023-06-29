#include <stdio.h>

/**
 * reverse_array - check the code
 * Description: 'Change pointer value'
 * @a: Pointer to variable str
 * @n: Pointer variable
 * Return: Always Integer
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
