#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: head of the list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_node;

	if (head != NULL)
	{
		while (head->prev!= NULL)
		{
			head = head->prev;
		}
	}
	while (head->next != NULL)
	{
		free_node = head;
		head = head->next;
		free(free_node);
	}
	free(head);
}
