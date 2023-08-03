#include "main.h"

/**
 * clear_bit - Sets bit to 0
 *@n: value to clear
 *@index: bit location
 * Return: 1 on success, -1 on failure.
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
