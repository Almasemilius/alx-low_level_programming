#include <stdio.h>

/**
 * main - Entry Point
 * Description: 'Program to print all combination numbers'
 * Return: Returns an integer value of zero
 */

int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);

		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
