#include "lists.h"
/**
*listint_len - gets the number of elements in a linked list
*@n: linked list of type listint_t to go through
*
*Return: number of nodes
*/
size_t listint(const listint_t *h)
{
size_t i = 0;
while (h)
{
i++;
h = h->next;
}
return (i);
}
