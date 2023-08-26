#include "main.h"

/**
 * clear_bit - Resets the bit.
 * @ptr_add: pointer of an unsigned long int.
 * @index: index
 *
 * Return: 1 if success, -1 if dailed.
 */
int clear_bit(unsigned long int *ptr_add, unsigned int index)
{
	int a;

	if (index > 63)
		return (-1);

	a = 1 << index;

	if (*ptr_add & a)
		*ptr_add ^= a;

	return (1);
}
