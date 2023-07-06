#include "lists.h"

/**
 * add_nodeint_end - it adds a node at the end of a list
 * @head: the pointer to the first element in the list
 * @n: the data to be inserted in the new element
 * Return: the pointer to the new node, or NULL if error
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *jess;
	listint_t *chi = *head;

	jess = malloc(sizeof(listint_t));
	if (!jess)
	return (NULL);

	jess->n = n;
	jess->next = NULL;

	if (*head == NULL)
	{
		*head = jess;
		return (jess);
	}

	while (chi->next)
	chi = chi->next;

	chi->next = jess;

	return (jess);
}
