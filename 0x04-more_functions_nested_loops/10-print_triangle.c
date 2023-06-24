#include<stdio.h>
#include "main.h"

/**
 *print_triangle - Entry point
 *Description: 'Main function to print putchar'
 *@size: parameter
 *Return: Integer Value 0
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
		{
			putchar(' ');
		}
		for (k = 1; k <= i; k++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
