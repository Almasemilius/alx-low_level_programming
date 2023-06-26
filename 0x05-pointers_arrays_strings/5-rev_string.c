#include "main.h"
#include <stdio.h>

/**
 * rev_string - check the code
 * @s: Parameter Variable
 */
void rev_string(char *s)
{
	int i;

	int j;

	j = 0;

	i = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	for (; i < j; i++, j--)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;
	}

}
