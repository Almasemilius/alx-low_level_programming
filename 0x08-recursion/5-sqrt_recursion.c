#include <stdio.h>

/**
 * _sqrt_recursion - check the code
 * Description: 'Recursion function'
 * @n: Variable y
 * Return: Always null
 */
int _sqrt_recursion(int n)
{
	int low = 1;
	int high = n;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	while (low <= high)
	{
		int mid = (low + high) / 2;
		int square = mid * mid;

		if (square == n)
		{
			return (mid);
		}
		else if (square < n)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
