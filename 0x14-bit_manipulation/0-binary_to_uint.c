#include "main.h"

/**
 * binary_to_uint - Converts binary to unsigned int
 *@b: string
 * Return: unsigned int or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int a;

	if (b == NULL)
	{
		return (0);
	}

	for (a = 0 ; *b != 0 ; b++)
	{
		if (*b == '0')
		{
			a = a << 1;
		}
		else if (*b == '1')
		{
			a = a << 1;
			a++;
		}
		else
		{
			return (0);
		}
	}
	return (a);
}
