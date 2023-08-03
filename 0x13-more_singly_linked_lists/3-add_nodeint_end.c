#include "lists.h"

/**
 * add_nodeint_end - function that add nodes
 * listint_t list.
 * @head: pointer to the head of the list
 * @n: node to be added
 *
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_end = malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (!n_end)
		return (NULL);
	n_end->n = n;
	n_end->next = NULL;
	if (*head == NULL)
	{
		*head = n_end;
		return (n_end);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = n_end;
	return (n_end);
}
