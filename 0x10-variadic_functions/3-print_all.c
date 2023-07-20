#include "variadic_functions.h"

/**
 * print_char - print chars
 *@arg: argument
 *
 *Return: void.
 */

void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_float - print floats
 *
 *@arg: arguments
 *
 */

void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_int - prints ints
 *
 *@arg: chars
 *
 */

void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_string - prints strings
 *
 *@arg: argument
 *
 */

void print_string(va_list arg)
{
	char *a;

	a = va_arg(arg, char *);
	if (a == NULL)
	{
		printf("(nil)");
	}
	printf("%s", a);
}

/**
 * print_all - prints all types
 *
 *@format: types pf args
 *
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	char *str1 = "";
	char *str2 = ", ";
	int x;
	int y;

	op_t ops[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(arg, format);

	x = 0;

	while (format != NULL && format[x] != '\0')
	{
		y = 0;

		while (ops[y].a != '\0')
		{
			if (ops[y].a == format[x])
			{
				printf("%s", str1);
				ops[y].f(arg);
				str1 = str2;
			}
			y++;
		}
		x++;
	}
	printf("\n");
	va_end(arg);
}
