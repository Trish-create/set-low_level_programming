#include "lists.h"

/**
 * sum_dlistint -this fuction  return the sum of all data of a dlistint_t list
 * @head: pointer to the first node
 * Return: sum of all data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
