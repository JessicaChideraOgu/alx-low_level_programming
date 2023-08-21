
#include "lists.h"

/**
 * insert_nodeint_at_index - this inserts a new node in the list
 * @head: it points to the first node in the list
 * @idx: the index where the new node is added
 * @n: the data to insert in the new node
 *
 * Return: NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *chi;
	listint_t *jess = *head;

	chi = malloc(sizeof(listint_t));

	if (!chi || !head)
	return (NULL);

	chi->n = n;
	chi->next = NULL;

	if (idx == 0)
	{
	chi->next = *head;
	*head = chi;
	return (chi);
	}
	for (a = 0; jess && a < idx; a++)
	{
	if (a == idx - 1)
	{
	chi->next = jess->next;
	jess->next = chi;
	return (chi);
	}
	else
	jess = jess->next;
	}

	return (NULL);
}
