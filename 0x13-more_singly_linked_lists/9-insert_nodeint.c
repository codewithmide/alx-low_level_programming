#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer with the first node.
 * @idx: the index of the node
 * @n: data of the node to create
 * Return: Adress of the node that index points
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p, *temp;
	unsigned int i;

	if (idx == 0)
	{
		p = malloc(sizeof(listint_t));
		if (p == NULL)
		{
			return (NULL);
		}
		p->n = n;
		p->next = *head;
		*head = p;
		return (p);
	}
	temp = *head;
	i = 1;
	while (temp != NULL)
	{
		if (i == idx)
		{
			p = malloc(sizeof(listint_t));
			if (p == NULL)
			{
				return (NULL);
			}
			p->n = n;
			p->next = temp->next;
			temp->next = p;
			return (p);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
