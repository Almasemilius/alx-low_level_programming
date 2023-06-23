#include<stdio.h>
#include "main.h"

/**
 *print_to_98 - Entry point
 *Description: 'Main function to print putchar'
 *Return: Integer Value 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0;i <= 9;i++)
		_putchar('0' + i);
	_putchar('\n');
}
