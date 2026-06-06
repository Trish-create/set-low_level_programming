#include "lists.h"

/**
 * delete_dnodeint_at_index - delete the node at index of a dlistint_t list
 * @head: pointer to pointer of the first node
 * @index: index of the node to delete
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	temp = *head;
	i = 0;

	if (*head == NULL)
		return (-1);

	while (temp != NULL)
	{
		if (i == index)
		{
			if (temp->prev != NULL)
				temp->prev->next = temp->next;
			else
				*head = temp->next;

			if (temp->next != NULL)
				temp->next->prev = temp->prev;

			free(temp);
			return (1);
		}
		i++;
		temp = temp->next;
	}

	return (-1);
}
