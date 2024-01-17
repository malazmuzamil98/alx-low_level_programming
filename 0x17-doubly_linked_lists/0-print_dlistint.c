#include "lists.h"
/**
 * print_dlistint - a Function that ...
 * @h: Description of h.
 * Return: Description of the return value.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int n;

	n = 0;
	if (h == NULL)
	{
		return (0);
	}
	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
