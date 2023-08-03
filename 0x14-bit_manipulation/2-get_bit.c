#include "main.h"

/**
 * get_bit - Return Value of a bit
 *@n: number
 *@index: location of bit
 * Return: bit value, or -1 on failure.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int a;

	if (index > 63)
	{
		return (-1);
	}

	a = 1 << index;
	return ((n & a) > 0);
}
