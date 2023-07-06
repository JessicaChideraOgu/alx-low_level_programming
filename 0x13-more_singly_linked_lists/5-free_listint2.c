#include "lists.h"

/**
 * free_listint2 - this frees a linked list
 * @head: the pointer to the listint_t list that is to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *jess;

	if (head == NULL)
	return;

	while (*head)
	{
		jess = (*head)->next;
		free(*head);
		*head = jess;
	}

	*head = NULL;
}
