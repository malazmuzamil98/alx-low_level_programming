#include "lists.h"
/**
 * dlistint_len - a Function that ...
 * @h: Description of h.
 * Return: Description of the return value.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int n;

	n = 0;
	if (h == NULL)
	{
		return (0);
	}
	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
