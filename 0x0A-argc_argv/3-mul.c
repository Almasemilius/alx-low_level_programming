#include <stdio.h>
#include "main.h"

/**
 * main - program that multiplies two numbers.
 * @argc: number
 * @argv: array of arguments in the program
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int product;
	(void)argv;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	product = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", product);
	return (0);
}
