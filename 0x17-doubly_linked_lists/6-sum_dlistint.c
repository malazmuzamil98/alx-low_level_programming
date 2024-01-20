#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a doubly linked list
 *
 * @head: head of the list
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *parser;
	int sum = 0;

	if (head == NULL)
		return (0);
	if (head->prev != NULL)
		head = head->prev;
	parser = head;
	while (parser->next != NULL)
	{
		sum += parser->n;
		parser = parser->next;
	}
	sum += parser->n;
	return (sum);
}
