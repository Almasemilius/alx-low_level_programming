#include "lists.h"

/**
 * add_nodeint - function description
 * of a listint_t list.
 * @head: pointer head of the list
 * @n: node
 *
 * Return: the address 
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
