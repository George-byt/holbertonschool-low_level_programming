#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - add a new node at the beginning of a dlistint_t list
 * @head: head of list
 * @n: value of element
 * Return: Address of the new element (SUCCESS), NULL (FAILURE)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = *head;
new->prev = NULL;
*head = new;
return (new);
}
