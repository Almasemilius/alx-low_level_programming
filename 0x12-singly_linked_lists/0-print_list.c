#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - adds all
 *@h: number of parameters
 * Return: 0 if n = 0, sum otherwise.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	list_t *current = h;

	while (current != NULL)
	{
		if (current->str != NULL)
		{
			printf("[%zu] %s\n", count, current->str);
		}
		else
		{
			printf("[%zu] (nil)\n", count);
		}
		count++;
		current = current->next;
	}

	return (count);
}
