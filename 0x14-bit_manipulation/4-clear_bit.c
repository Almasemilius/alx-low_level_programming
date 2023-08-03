#include "main.h"

/**
 * clear_bit - clear bit
 *@n: value to clear
 *@index: bit location
 * Return: 1 on success, -1 on failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = *n - (1ul << index);

	return (1);
}
