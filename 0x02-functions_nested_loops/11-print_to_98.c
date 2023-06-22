#include<stdio.h>
#include "main.h"

/**
 *print_to_98 - Entry point
 *Description: 'Main function to print putchar'
 *@n: parameter passed
 *Return: Integer Value 0
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				_putchar(',');
				_putchar(' ');
			} else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
		}
	} else
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				_putchar(',');
				_putchar(' ');
			} else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
		}
	}
	_putchar('\n');
}
