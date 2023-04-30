#include "lists.h"
/**
 *listint_len - returns the number of elements in the linked list
 *@h: head of linked list
 *Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count;
	const listint_t *ptr;

	count = 0;
	if (h == NULL)
		return (0);

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
