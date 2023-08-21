#include "lists.h"

/**
 * pop_listint - it deletes the head node of the list
 * @head: the pointer to the first element in the list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *jess;
	int chi;

	if (!head || !*head)
	return (0);

	chi = (*head)->n;
	jess = (*head)->next;
	free(*head);
	*head = jess;

	return (chi);
}
