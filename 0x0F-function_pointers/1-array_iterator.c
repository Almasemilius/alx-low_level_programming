#include <stdio.h>

/**
 * array_iterator - converts a string to an integer
 * @array: integer to be converted
 * @size: integer to be converted
 * @action: integer to be converted
 * Return: Pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

