#include "main.h"
#include <stdlib.h>

/*
 * count_mywords - function that splits a string into words
 * @s: string supplied
 *
 * Return: NULL if str == NULL or str == ""
 */
int count_mywords(char *s)
{
	int counter, c, w;

	counter = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			counter = 0;
		else if (counter == 0)
		{
			counter = 1;
			w++;
		}
	}

	return (w);
}
/*
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to string
 */
char **strtow(char *str)
{
	char **fPointer, *sPointer;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_mywords(str);
	if (words == 0)
		return (NULL);

	fPointer = (char)malloc(sizeof(char *) * (words + 1));
	if (fPointer == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				sPointer = (char *)malloc(sizeof(char) * (c + 1));
				if (sPointer == NULL)
					return (NULL);
				while (start < end)
					*sPointer++ = str[start++];
				*sPointer = '\0';
				fPointer[k] = sPointer - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	fPointer[k] = NULL;

	return (fPointer);
}
