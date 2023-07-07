#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: 'Recursion function'
 * @argc: Pointer to variable str
 * @argv: Pointer to variable str
 * Return: Always null
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result = num1 * num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", result);
	return (0);
}
