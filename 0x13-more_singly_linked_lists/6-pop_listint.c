#include "lists.h"
/**
 *pop_listint - deletes head node of linked list
 *@head: pointer to head node
 *Return: head node's data(n)
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *current;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	current = *head;
	*head = (*head)->next;
	free(current);

	return (n);
}
