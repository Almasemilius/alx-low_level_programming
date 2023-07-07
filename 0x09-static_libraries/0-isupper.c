#include <stdio.h>
#include "main.h"

/**
 *_isupper - Entry point
 *Description: 'Main function to print putchar'
 *@c: parameter passed
 *Return: Integer Value 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

