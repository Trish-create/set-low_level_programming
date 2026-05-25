#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
