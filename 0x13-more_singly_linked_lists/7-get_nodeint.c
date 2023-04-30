#include "lists.h"
/**
 *get_nodeint_at_index - returns the nth node
 *@head: head of the linked list
 *@index: index of the node
 *Return: the nth node, NULL if the node is non-existent
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	if (head == NULL)
		return (NULL);

	current = head;
	for (i = 0; i < index; i++)
	{
		if (current == NULL)
			return (0);
		current = current->next;
	}
	return (current);
}
