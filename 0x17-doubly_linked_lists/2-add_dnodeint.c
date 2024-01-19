#include "lists.h"
/**
 * add_dnodeint - a Function that ...
 * @head: Description of head.
 * @n: Description of n.
 * Return: Description of the return value.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	*temp = head;
	new_node->next = temp;
	if (temp != NULL)
	{
		temp->prev = new_node;
	}
	*head = new_node;
	return (*head);
}
