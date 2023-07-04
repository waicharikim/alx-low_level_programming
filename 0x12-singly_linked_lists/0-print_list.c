#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - print elements of a list
 * @h: pointer to a node
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i;

	i = 0;
	while (h)
	{
		if (h->str)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
			printf("[0] (nil)");
		i++;
		h = h->next;
	}
	return (i);
}
