#include <stdio.h>

/**
 * main -Entry point
 * Description: 'The function to print characters'
 * Return: Returns zero int
 */

int main(void)
{
	char init = 'a';

	for (init = 'a'; init <= 'z'; init++)
		putchar(init);
	return (0);
}
