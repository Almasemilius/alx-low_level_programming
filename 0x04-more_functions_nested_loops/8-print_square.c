#include<stdio.h>
#include "main.h"

/**
 *print_square - Entry point
 *Description: 'Main function to print putchar'
 *@size: parameter
 *Return: Integer Value 0
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
