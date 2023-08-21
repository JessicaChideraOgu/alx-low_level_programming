#include "lists.h"

/**
 * sum_listint - it calculates the sum of all data in a list
 * @head: the first node in the linked list
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *temp = head;

	while (temp)
	{
		add += temp->n;
		temp = temp->next;
	}

	return (add);
}
