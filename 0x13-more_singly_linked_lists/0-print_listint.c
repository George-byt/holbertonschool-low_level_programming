#include "lists.h"
/**
 * print_listint - Function that prints all the elements of a list.
 * @h: Pointer to the start of the list.
 * Return: Return the numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
int count = 0;
while (h)
{
    printf("%d\n", h->n);
    h = h->next;
    count++;
}
return (count);
}