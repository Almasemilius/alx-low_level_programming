#include "main.h"
#include <stdio.h>

/**
 * rev_string - check the code
 * @s: Parameter Variable
 */
void rev_string(char *s)
{
	char *start = s;

	char *end = s;

	while (*end != '\0')
	{
		end++;
	}

	end--;

	while (start < end)
	{
		char temp = *start;

		*start = *end;

		*end = temp;

		start++;

		end--;
	}
}
