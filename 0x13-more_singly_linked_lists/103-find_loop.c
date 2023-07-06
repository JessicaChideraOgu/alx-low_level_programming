#include "lists.h"

/**
 * find_listint_loop - it finds the loop in the list
 * @head: the main linked list to look for
 * Return: the address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *jess = head;
	listint_t *chi = head;

	if (!head)
	return (NULL);

	while (jess && chi && chi->next)
	{
	chi = chi->next->next;
	jess = jess->next;
	if (chi == jess)
	{
	jess = head;
	while (jess != chi)
	{
		jess = jess->next;
		chi = chi->next;
	}
		return (chi);
	}
	}

	return (NULL);
}
