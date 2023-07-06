#include "lists.h"

/**
 * free_listint_safe - it frees a linked list
 * @h: it points to the first node in the list
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t jess = 0;
	int tech;
	listint_t *chi;

	if (!h || !*h)
	return (0);

	while (*h)
	{
		tech = *h - (*h)->next;
	if (tech > 0)
	{
		chi = (*h)->next;
		free(*h);
		*h = chi;
		jess++;
	}
	else
	{
	free(*h);
	*h = NULL;
	jess++;
	break;
	}
	}

	*h = NULL;

	return (jess);
}
