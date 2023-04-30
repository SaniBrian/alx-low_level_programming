#include "lists.h"
/**
 *print_listint - prints all the elements of a listint_t
 *@h: head of the linked list
 *Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	long unsigned int count;

	count = 0;
	if (h == NULL)
		return (0);

	ptr = h;

	while (ptr != NULL)
	{
		count++;
		printf("%d\n", ptr->n );
		ptr = ptr->next;
	}
	return (count);
}
