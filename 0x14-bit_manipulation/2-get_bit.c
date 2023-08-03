#include "main.h"

/**
 * get_bit - cet value
 *@n: number to get
 *@index: location of bit
 * Return: bit value, or -1 on failure.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x;

	if (index > 63)
	{
		return (-1);
	}

	x = 1 << index;
	return ((n & x) > 0);
}
