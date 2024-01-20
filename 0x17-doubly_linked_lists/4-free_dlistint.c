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

	while (head->next != NULL)
	{
		free_node = head;
		head = head->next;
		free(free_node);
	}

}
