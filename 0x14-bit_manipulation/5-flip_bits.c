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
	unsigned long int a;

	a = n ^ m;
	total = 0;

	while (a)
	{
		if (a & 1ul)
		{
			total++;
		}
		a = a >> 1;
	}

	return (total);
}
