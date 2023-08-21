#include "lists.h"

/**
 * add_nodeint - it adds a new node at the beginning of the list
 * @head: the pointer to the first node
 * @n: the data to be inserted
 *
 * Return: return the pointer to the new node, or NULL if error
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *jess;

	jess = malloc(sizeof(listint_t));
	if (!jess)
	return (NULL);

	jess->n = n;
	jess->next = *head;
	*head = jess;

	return (jess);
}
