#include "lists.h"
/**
 * add_nodeint_end - Function that adds a new node at the end of a list.
 * @head: Pointer to the listint_t list.
 * @n: listint_t integer.
 * Return: Address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp, *new;

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	return (new);
}
