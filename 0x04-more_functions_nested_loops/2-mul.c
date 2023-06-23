#include<stdio.h>
#include "main.h"

/**
 *mul - Entry point
 *Description: 'function to multiply'
 *@a: parameter passed
 *@b: parameter passed
 *Return: Integer Value 0
 */

int mul(int a, int b)
{
	int res;

	res = a * b;

	_putchar('0' + res);

	return (0);
}
