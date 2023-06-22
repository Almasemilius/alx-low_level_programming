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
			if (i != n)
				_putchar(',');
			_putchar(' ');
			if (i / 10 != 0)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
		} else
		{
			for (int i = n; i >= 98; i--)
			{
				if (i != n)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (i / 10 != 0)
					_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
		}
		_putchar('\n');
}
