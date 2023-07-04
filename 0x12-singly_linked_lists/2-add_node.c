#include "lists.h"

/**
 * add_nodes - adds nodes to a list
 * @h: pointer to a node
 *
 * Return: pointer to added node/element. Null for fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (ptr)
	{
		if (str)
		{
			ptr->str = strdup(str);
			ptr->next = *head;
			ptr->len = strlen(str);
		}
		else
		{
			ptr->str = NULL;
			ptr->len = 0;
		}
	}
	else
		return (NULL);
	*head = ptr;
	return (*head);
}
