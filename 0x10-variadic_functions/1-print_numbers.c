#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 *@separator: chars to put between numbers
 *@n: number of ints passed
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int x;

	va_start(ap, n);

	for (x = 0 ; x < n ; x++)
	{
		printf("%d", va_arg(ap, int));

		if (separator != NULL && x < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
