#include "lists.h"
/**
 * pop_listint - Function that deletes the head node of a linked list.
 * @head: Pointer to the first node.
 * Return: The head nodes data (n).
 */
int pop_listint(listint_t **head)
{
	int copy;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	copy = temp->n;
	free(temp);
	return (copy);
}
