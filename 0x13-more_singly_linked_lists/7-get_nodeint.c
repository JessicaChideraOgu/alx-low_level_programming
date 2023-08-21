#include "lists.h"

/**
 * get_nodeint_at_index - it returns the node at a certain index of the list
 * @head: the first node in the linked list
 * @index: reoresent the index of the node to return
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *jess = head;

	while (jess && a < index)
	{
		jess = jess->next;
		a++;
	}

	return (jess ? jess : NULL);
}
