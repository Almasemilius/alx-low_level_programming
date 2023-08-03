#include "main.h"

/**
 * clear_bit - set a value of a bit to 0
 *@n: number to set
 *@index: location of bit
 * Return: bit value, or -1 on failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	unsigned long int mask = 1UL << index;

	mask = ~mask;

	*n = *n & mask;

	return (1);
}
