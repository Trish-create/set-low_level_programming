#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: double pointer to the head of the list
 * @index: index of the node that should be deleted, starting at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;
	listint_t *node_to_delete;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		node_to_delete = *head;
		*head = (*head)->next;
		free(node_to_delete);
		return (1);
	}

	temp = *head;

	for (i = 0; temp != NULL && i < index - 1; i++)
	{
		temp = temp->next;
	}

	if (temp == NULL || temp->next == NULL)
		return (-1);

	node_to_delete = temp->next;
	temp->next = node_to_delete->next;
	free(node_to_delete);

	return (1);
}
