#include "lists.h"
/**
 *add_nodeint_end - adds a new node at th end of a linked list
 *@head: pointer to head of the linked list
 *@n: integer data
 *Return - address of the new element
 *NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *ptr;
	temp =

	malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	ptr = *head;
	if (ptr == NULL)
		*head = temp;
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}

	return (ptr);
}
