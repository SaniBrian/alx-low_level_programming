#include "lists.h"
/**
 *free_listint - frees the linked list
 *@head: head of the linked list
 *Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}
