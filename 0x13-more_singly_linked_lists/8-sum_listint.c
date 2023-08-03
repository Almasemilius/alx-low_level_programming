#include "lists.h"

/**
 * sum_listint -  function that returns the sum of all the data
 * @head: pointer
 *
 * Return: summaation of data in the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
