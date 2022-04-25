#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at a given position.
 * @head: pointer with the first node.
 * @index: the index of the node.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int i = 1;

	temp = *head;
	while (temp != NULL)
	{
		if (index == 0)

		{
			temp2 = *head;
			*head = temp2->next;
			free(temp2);
			return (1);
		}
		else if (i == index)
		{
			temp2 = temp->next;
			temp->next = temp2->next;
			free(temp2);
			return (1);
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}
