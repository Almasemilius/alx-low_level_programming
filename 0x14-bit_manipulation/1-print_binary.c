#include "main.h"

/**
 * print_binary - print binary
 *@n: binary to print
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	unsigned long int x = 1ul << 63;
	char c = x;

	while (!(x & n) && x != 0)
	{
		x = x >> 1;
	}

	if (x == 0)
	{
		_putchar('0');
	}

	while (x)
	{
		if (x & n)
		{
			c = '1';
		}
		else
		{
			c = '0';
		}
		_putchar(c);
		x = x >> 1;
	}
}
