#include<stdio.h>
#include "main.h"

/**
 *print_line - Entry point
 *Description: 'Main function to print putchar'
 *Return: Integer Value 0
 *@n: parameter value
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		putchar('_');
	}
	putchar('\n');
}
