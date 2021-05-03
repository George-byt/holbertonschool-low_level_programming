#include "lists.h"
/**
 * dlistint_len - Function that returns the number
 * of elements in a linked dlistint_t list.
 * @h: Header of dlistint_t
 * Return: The number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t len_list;
for (len_list = 0; h != NULL; len_list++)
h = h->next;
return (len_list);
}
