#include "lists.h"
/**
*add_nodeint - adds anew node at the start of a linked list
*@head: pointer to the first mode in list
*@n: data to insert into new node
*
*Return: pointer to the new node, or NULL if failure
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}
