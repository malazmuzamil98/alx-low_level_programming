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

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
