#include "lists.h"
/**
 * list_len - Function that returns the number of elements in a linked lists.
 * @h: Input.
 * Return: Numbers of nodes.
 */
 size_t list_len(const list_t *h)
 {
size_t count = 0;
while (h)
{
h = h->next;
count++;
}
return (count);
}