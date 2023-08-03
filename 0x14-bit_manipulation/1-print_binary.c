#include "main.h"

/**
 * print_binary - print binary of a number
 *@n: binary to print
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	unsigned long int a = 1ul << 63;
	char b = a;

	while (!(a & n) && a != 0)
	{
		a = a >> 1;
	}

	if (a == 0)
	{
		_putchar('0');
	}

	while (a)
	{
		if (a & n)
		{
			b = '1';
		}
		else
		{
			b = '0';
		}
		_putchar(b);
		a = a >> 1;
	}
}
