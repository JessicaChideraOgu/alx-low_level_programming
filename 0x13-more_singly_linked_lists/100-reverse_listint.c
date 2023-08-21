#include "lists.h"

/**
 * reverse_listint - it reverses the linked list
 * @head: it points to the first node in the list
 * Return: it points to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = old;
		old = *head;
		*head = next;
	}

	*head = old;

	return (*head);
}
