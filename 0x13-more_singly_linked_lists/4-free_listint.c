#include "lists.h"

/**
 * free_listint - it frees a linked list
 * @head: list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *chi;

	while (head)
	{
		chi = head->next;
		free(head);
		head = chi;
	}
}
