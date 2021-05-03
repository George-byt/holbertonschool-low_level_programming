#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to the first node
 * @n: data for the new node
 *
 * Return: address of the new element (SUCCESS), NULL (FAILURE)
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_last;
dlistint_t *current;
current = *head;

new_last = malloc(sizeof(dlistint_t));
if (new_last == NULL)
return (NULL);
new_last->n = n;
new_last->prev = current;
new_last->next = NULL;
if (*head == NULL)
{
*head = new_last;
}
else
{
while (current->next != NULL)
{
new_last->prev = current;
current = current->next;
}
current->next = new_last;
}
return (new_last);
}
