#include <stdio.h>

/**
 * int_index - converts a string to an integer
 * @array: integer to be converted
 * @size: integer to be converted
 * @cmp: integer to be converted
 * Return: Pointer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
