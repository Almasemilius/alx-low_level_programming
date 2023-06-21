#include<stdio.h>
#include "main.h"

/**
 *print_alphabet_x10 - Entry point
 *Description: 'Main function to print putchar'
 *Return: Integer Value 0
 */

void print_alphabet_x10(void)
{
	char start = 'a';

	char end = 'z';

	int i = 0;

	for (i = 0; i < 10; i++)
	{
	char c = start;

	while (c <= end)
	{
	_putchar(c++);
	}
	_putchar('\n');
	}

}
