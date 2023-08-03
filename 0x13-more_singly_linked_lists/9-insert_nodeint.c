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
	listint_t *new;
	listint_t *temp;
	unsigned int x;

	temp = *head;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (*head);
	}
	x = 0;
	while (x < (idx - 1))
	{
		if (temp == NULL)
		{
			free(new);
			return (NULL);
		}

		temp = temp->next;
		x++;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
