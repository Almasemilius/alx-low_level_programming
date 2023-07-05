#include <stdio.h>

/**
 * sqrt_helper - check the code
 * Description: 'Recursion function'
 * @n: Variable y
 * @start: Variable y
 * @end: Variable y
 * Return: Always null
 */
int sqrt_helper(int n, int start, int end)
{
	int mid = (start + end) / 2;
	int square = mid * mid;

	if (start > end)
	{
		return (-1);
	}

	if (square == n)
	{
		return (mid);
	}
	else if (square < n)
	{
		return (sqrt_helper(n, mid + 1, end));
	}
	else
	{
		return (sqrt_helper(n, start, mid - 1));
	}
}

/**
 * _sqrt_recursion - check the code
 * Description: 'Recursion function'
 * @n: Variable y
 * Return: Always null
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (sqrt_helper(n, 0, n));
}
