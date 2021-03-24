#include "lists.h"
/**
 * listint_len - Function that return the number of elements in a linked list.
 * @h: Pointer to the start of the list.
 * Return: Number of elements in a linked list.
 */
size_t listint_len(const listint_t *h)
{
int count = 0;
while (h)
{
count++;
h = h->next;
}
return (count);
}
