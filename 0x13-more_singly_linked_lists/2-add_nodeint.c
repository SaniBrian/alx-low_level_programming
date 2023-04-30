#include "lists.h"
/**
 *add_nodeint - adds a new node at the beginning of a linked list
 *@head: pointer to head of linked list
 *@n: integer data
 *Return: address of the new element
 *NULL if it failed
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

	return (*head);
}
