#include "lists.h"

/**
 * insert_nodeint_at_index - insert node
 *@head: first node
 *@idx: place to put new node
 *@n: node contents
 * Return: node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *tmp;
	unsigned int x;

	tmp = *head;

	if (head == NULL)
	{
		return (NULL);
	}
	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	if (idx == 0)
	{
		node->next = tmp;
		*head = node;
		return (*head);
	}
	x = 0;
	while (x < (idx - 1))
	{
		if (tmp == NULL)
		{
			free(node);
			return (NULL);
		}

		tmp = tmp->next;
		x++;
	}
	node->next = tmp->next;
	tmp->next = node;
	return (node);
}
