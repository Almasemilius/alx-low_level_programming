#include <stdio.h>
#include "main.h"

/**
 *_isdigit - Entry Point
 *Description: 'Checks integer values'
 *@c: argument parameter
 *Return: Either 0 or 1
 */

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
