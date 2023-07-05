#include "lists.h"

/**
 * print_listint - it prints all the elements found in the linked list
 * @h: the linked list of type listint_t to be printed
 * Return: amount of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t jess = 0;

	while (h)
	{
		printf("%d\n", h->n);
		jess++;
		h = h->next;
	}
	return (jess);
}
