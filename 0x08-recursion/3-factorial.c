#include <stdio.h>

/**
 * _strlen_recursion - check the code
 * Description: 'Recursion function'
 * @s: Pointer to variable str
 * Return: Always null
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
