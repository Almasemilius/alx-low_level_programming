#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - converts a string to an integer
 * @name: integer to be converted
 * @f: integer to be converted
 * Return: Pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
