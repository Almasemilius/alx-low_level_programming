#include "variadic_functions.h"

/**
 * print_strings - print strings
 *@separator: string of separators between strings
 *@n: number of strings
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int x;
	char *a;

	va_start(ap, n);

	for (x = 0 ; x < n ; x++)
	{
		a = va_arg(ap, char *);

		if (a != NULL)
		{
			printf("%s", a);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && x < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
