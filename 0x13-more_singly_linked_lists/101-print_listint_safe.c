#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - it counts the number of nodes
 * in a looped listint_t list.
 * @head: it points to the head of the listint_t
 *
 * Return:  0.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *jess, *chi;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
	return (0);

	jess = head->next;
	chi = (head->next)->next;

	while (chi)
	{
	if (jess == chi)
	{
	jess = head;
	while (jess != chi)
	{
		nodes++;
		jess = jess->next;
		chi = chi->next;
	}

	jess = jess->next;
	while (jess != chi)
	{
		nodes++;
		jess = jess->next;
																						}
		return (nodes);
	}

		jess = jess->next;
		chi = (chi->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - it prints a listint_t list with carefulness.
 * @head: it points to the head of the list.
 *
 * Return: The amount of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t jess, index = 0;

	jess = looped_listint_len(head);

	if (jess == 0)
	{
	for (; head != NULL; jess++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	}

	else
	{
	for (index = 0; index < jess; index++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (jess);
}
