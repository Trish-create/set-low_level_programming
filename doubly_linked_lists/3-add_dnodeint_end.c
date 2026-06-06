#include "lists.h"
 /**
  * add_dnodeint_end- this function adds a new node at the end 
  * @head: this is a pointer that points to the first node
  * @n: this is the integer that stores the new node
  * return:the address of the new element, or NULL if it failed
  */
   dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
   {
	dlistint_t *new;
	dlistint_t *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;
	new->prev = temp;

	return (new);
}
