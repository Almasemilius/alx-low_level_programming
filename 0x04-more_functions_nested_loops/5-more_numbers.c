#include<stdio.h>
#include "main.h"

/**
 *more_numbers - Entry point
 *Description: 'Main function to print putchar'
 *Return: Integer Value 0
 */

void more_numbers(void)
{
	int i;

	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j <= 9)
			{
			_putchar('0' + j);
			}
			else
			{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			}
		}

		_putchar('\n');
	}
}
