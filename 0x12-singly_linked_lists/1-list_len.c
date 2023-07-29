#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - adds all
 *@h: number of parameters
 * Return: 0 if n = 0, sum otherwise.
 */
size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
