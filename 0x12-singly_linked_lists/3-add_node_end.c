#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds all
 *@head: number of parameters
 *@str: number of parameters
 * Return: 0 if n = 0, sum otherwise.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;

	if (str == NULL)
	{
		return (NULL);
	}

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	current = *head;
	if (current == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new_node;

	return (new_node);
}
