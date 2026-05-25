#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: A pointer to the pointer to the head of the listint_t list.
 *
 * Return: The head node's data (n), or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	/* 1. Save the data and the current head address */
	temp = *head;
	data = temp->n;

	/* 2. Move the head pointer to the next node */
	*head = (*head)->next;

	/* 3. Free the old head node */
	free(temp);

	return (data);
}
