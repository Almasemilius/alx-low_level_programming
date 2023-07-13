#include <stdlib.h>

/**
 * array_range - converts a string to an integer
 * @min: integer to be converted
 * @max: integer to be converted
 * Return: Pointer
 */
int *array_range(int min, int max)
{
	int num_elements, *arr, i;

	if (min > max)
		return (NULL);

	num_elements = max - min + 1;

	arr = malloc(num_elements * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < num_elements; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
