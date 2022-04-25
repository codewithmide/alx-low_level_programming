#include "lists.h"
/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: pointer with the first node
 * Return: Integer with the sum of all data
 */
int sum_listint(listint_t *head)
{
	listint_t *p;
	unsigned int i = 0;

	p = head;
	if (head == NULL)
	{
		return (0);
	}
	while (p != NULL)
	{
		i = i + (p->n);
		p = p->next;
	}
	return (i);
}
