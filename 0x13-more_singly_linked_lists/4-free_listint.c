#include "lists.h"
/**
 * free_listint - Function that frees a list.
 * @head: Pointer to the list.
 */
void free_listint(listint_t *head)
{
listint_t *current, *next;
current = head;
while (current)
{
next = current->next;
free(current);
current = next;
}
}

