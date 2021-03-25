#include "lists.h"
/**
 * add_node - Function that adds a new node at the beginning of a list.
 * @head: Pointer to pointer to head element.
 * @str: Pointer to string.
 * Return: The addres of a new element.
 */
list_t *add_node(list_t **head, const char *str)
{
int i;
list_t *aux = NULL;
aux = malloc(sizeof(list_t));
if (aux == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
{
}
aux->str = strdup(str);
aux->next = *head;
aux->len = i;
*head = aux;
return (*head);
}
