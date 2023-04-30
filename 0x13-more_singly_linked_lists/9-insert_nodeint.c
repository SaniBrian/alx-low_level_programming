#include "lists.h"
/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *@head: pointer to the head of the linked list
 *@idx: index of the list where the new node should be added
 *@n: new data
 *Return: address of the new node, NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *temp;
	unsigned int i;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	current = *head;

	for (i=0; i < idx - 1; i++)
	{
		if (current != NULL)
			current = current->next;
	}

	if (current == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->next = current->next;
	current->next = temp;

	return (temp);
}
