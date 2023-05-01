#include "lists.h"
/**
 *delete_nodeint_at_index - deletes the node at index index
 *@head: pointer to head of linked list
 *@index: index of the node that should be deleted
 *Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}

	current = *head;

	if (*head != NULL && index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index - 1 && current != NULL; i++)
	{
		current = current->next;
	}

	if (current == NULL)
		return (1);

	temp = current->next->next;
	free(current->next);
	current->next = temp;

	return (1);
}
