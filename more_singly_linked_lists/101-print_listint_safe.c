#include "lists.h"
#include <stdio.h>
/*
 * print_listint_safe- prints a linked list
 * @head:pointer to the head 
 * return: the number of nodes in a list 
 * if function fails exit program with status 98
 */
size_t print_listint_safe(const listint_t *head)
	{
	size_t nodes = 0;
	long int diff;

	if (!head)
		return (0);

	while (head)
	{
		diff = head - head->next;
		nodes++;

		printf("[%p] %d\n", (void *)head, head->n);

		if (diff > 0)
		{
			head = head->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (nodes);
	}
