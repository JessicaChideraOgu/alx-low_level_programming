#include "lists.h"

/**
 * listint_len - it returns the number of elements in the linked lists
 * @h: linked list of type listint_t
 * Return: amount of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t jess = 0;

	while (h)
	{
		jess++;
		h = h->next;
	}

	return (jess);
}
