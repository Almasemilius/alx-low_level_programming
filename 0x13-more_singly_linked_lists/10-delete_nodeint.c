#include "lists.h"

/**
 * delete_nodeint_at_index - delete node
 *@head: first node
 *@index: place on list to delete
 * Return: -1 on failure, 1 on success.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *TTemp;
	unsigned int x;

	if (*head == NULL)
	{
		return (-1);
	}

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	x = 0;

	while (x < (index - 1))
	{
		if (temp == NULL)
		{
			return (-1);
		}
		temp = temp->next;
		x++;
	}
	TTemp = (temp->next)->next;
	free(temp->next);
	temp->next = TTemp;

	return (1);
}
