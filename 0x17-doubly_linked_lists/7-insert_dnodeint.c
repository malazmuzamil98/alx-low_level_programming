#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *parser, *new_node, *holder;
	unsigned int i;

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
	}
	else
	{
		if (h == NULL)
			return (NULL);
		while (h->prev != NULL)
			h = h->prev;
		parser = *h;
		for (i = 0; i < idx; i++)
		{
			if (parser->next != NULL)
			{
				parser = parser->next;
			}
			else
				return (NULL);
		}
		if (parser->next == NULL)
		{
			new_node = add_dnodeint(h, n);

		}
		else
		{
			
		}
	}
	
}