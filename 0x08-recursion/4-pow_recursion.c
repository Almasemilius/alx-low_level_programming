#include <stdio.h>
/**
 * _pow_recursion - check the code
 * Description: 'Recursion function'
 * @x: Variable x
 * @y: Variable y
 * Return: Always null
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
