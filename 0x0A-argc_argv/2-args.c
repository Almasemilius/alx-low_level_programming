#include <stdio.h>

/**
 * main - entry point
 * Description: 'Recursion function'
 * @argc: Pointer to variable str
 * @argv: Pointer to variable str
 * Return: Always null
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
