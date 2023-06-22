#include<stdio.h>
#include "main.h"

/**
 *times_table - Entry point
 *Description: 'Main function to print putchar'
 *Return: Integer Value 0
 */

void times_table(void)
{
	int i;

	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int result = i * j;

			if (result <= 9)
			{
				_putchar(result + '0');
				_putchar('\t');
			} else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
				_putchar('\t');
			}
		}
		_putchar('\n');
	}
}
