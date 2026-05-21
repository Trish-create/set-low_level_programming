#include "lists.h"
/**
 * a function that prints all the elements of a list_t list
 * Return: the number of nodes
 * If str is NULL, print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
