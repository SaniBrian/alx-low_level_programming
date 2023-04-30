#include "lists.h"
/**
 *free_listint2 - frees the linked list
 *@head: head of the linked list
 *Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head == NULL)
		return;

	current = *head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
