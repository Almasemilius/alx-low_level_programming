#include "lists.h"

/**
 * delete_nodeint_at_index - delete node
 *@head: first node
 *@index: place on list to delete
 * Return: -1 on failure, 1 on success.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *Tmp;
	unsigned int x;

	if (*head == NULL)
	{
		return (-1);
	}

	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	x = 0;

	while (x < (index - 1))
	{
		if (tmp == NULL)
		{
			return (-1);
		}
		tmp = tmp->next;
		x++;
	}
	Tmp = (tmp->next)->next;
	free(tmp->next);
	tmp->next = Tmp;

	return (1);
}
