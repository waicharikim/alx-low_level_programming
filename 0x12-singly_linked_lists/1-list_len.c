#include "lists.h"

/**
 * list_len - calculates the number of elements in a linked list
 * @h: pointer to a node
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int i;

	i = 0;
	while (h)
	{
			i++;
			h = h->next;
	}
	return (i);
}
