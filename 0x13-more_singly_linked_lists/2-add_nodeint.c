#include "lists.h"
/**
 * add_nodeint - Function that adds a new node at the beginning of a list.
 * @head: Pointer to the first element of the list.
 * @n: Number to fill the list.
 * Return: Address of the new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}
