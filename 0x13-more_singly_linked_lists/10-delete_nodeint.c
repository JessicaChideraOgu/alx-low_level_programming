#include "lists.h"

/**
 * delete_nodeint_at_index - it helps to delete a node in a linked list at a certain index
 * @head: it pointes to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *jess = *head;
	listint_t *chi = NULL;
	unsigned int a = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
	*head = (*head)->next;
	free(jess);
	return (1);
	}

		while (a < index - 1)
		{
		if (!jess || !(jess->next))
		return (-1);
		jess = jess->next;
		a++;
	}

	chi = jess->next;
	jess->next = chi->next;
	free(chi);

	return (1);
}
