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

	last = *head;
	ptr = malloc(sizeof(list_t));
	if (ptr)
	{
		if (str)
		{
			ptr->str = strdup(str);
			ptr->len = strlen(str);
			ptr->next = *head;
		}
		else
		{
			ptr->str = NULL;
			ptr->len = 0;
		}
		if (*head == NULL)
		{
			*head = ptr;
			last = ptr;
		}
		else
		{
			last->next = ptr;
			last = ptr;
		}
	}
	else
		return (NULL);
	return (*head);
}
