#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Descriptions'
 * Return: Returns int
 */

int main(void)
{
	int i;
	char init = 'a';

	for (i = 0; i < 10; i++)
		putchar('0' + i);
	for (init = 'a'; init <= 'f'; init++)
		putchar(init);
	putchar('\n');

	return (0);
}
