#include "lists.h"
/**
 * add_node_end - adds nodes to a list
 * @head: location of head pointer
 * @str: pointer to a string
 *
 * Return: pointer to added node/element. Null for fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *last;

	last = NULL;
	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);
	if (str)
		ptr->str = strdup(str);
	else
		ptr->str = NULL;
	ptr->len = strlen(str);
	ptr->next = NULL;
	if (!*head)
	{
		*head = ptr;
		last = ptr;
	}
	else
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = ptr;
	}
	return (last);
}
