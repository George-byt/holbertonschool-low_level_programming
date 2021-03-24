#include "lists.h"
/**
 * free_listint2 - Function that frees a list.
 * @head: Pointer to the list.
 */
void free_listint2(listint_t **head)
{
listint_t *current, *next;

if (head == NULL)
return;
current = *head;
while (current)
{
next = current->next;
free(current);
current = next;
}
*head = NULL;
}