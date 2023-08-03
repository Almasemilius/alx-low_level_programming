#include "main.h"

/**
 * flip_bits - flips bits to get from num to num
 *@n: number to flip
 *@m: number to flip
 * Return: number required to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int total;
	unsigned long int x;

	x = n ^ m;
	total = 0;

	while (x)
	{
		if (x & 1ul)
		{
			total++;
		}
		x = x >> 1;
	}

	return (total);
}
