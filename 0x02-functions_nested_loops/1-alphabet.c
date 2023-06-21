#include<stdio.h>
#include "main.h"

/**
 * main - Entry point
 *Description: 'Main function to print putchar'
 *Return: Integer Value 0
 */

void print_alphabet(void)
{
	char start = 'a';

	char end = 'z';

	while (start <= end)
	{
		_putchar(start++);
	}

	_putchar('\n');

}
