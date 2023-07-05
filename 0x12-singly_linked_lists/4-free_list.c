#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *ptr;

	ptr = head;
	while (ptr)
	{
		ptr = ptr->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
