#include "main.h"

/**
 * set_bit - set bit value
 *@n: number to set
 *@index: location of bit
 * Return: bit value, or -1 on failure.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = *n | 1ul << index;

	return (1);
}
