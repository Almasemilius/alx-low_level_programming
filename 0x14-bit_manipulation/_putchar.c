#include <unistd.h>

/**
 * _putchar - Prints a single character (Instead of printf)
 * @c: The character to print
 *
 * Return: Character.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
