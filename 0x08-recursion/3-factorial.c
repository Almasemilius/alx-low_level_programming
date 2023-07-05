#include <stdio.h>

/**
 * factorial - check the code
 * Description: 'Recursion function'
 * @n: Pointer to variable str
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
