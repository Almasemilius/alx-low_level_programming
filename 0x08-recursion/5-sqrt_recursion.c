#include <stdio.h>

/**
 * _sqrt_recursion - check the code
 * Description: 'Recursion function'
 * @n: Variable y
 * Return: Always null
 */
int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
	{
		return -1;
	}

	if (n == 0 || n == 1)
	{
		return n;
	}

	for (i = 1; i * i <= n; i++)
	{
		if (i * i == n)
		{
			return i;
		}
	}

	return -1;
}
