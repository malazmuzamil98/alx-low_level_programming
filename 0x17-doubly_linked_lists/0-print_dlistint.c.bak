#include "lists.h"
size_t print_dlistint(const dlistint_t *h)
{
	int n;

	n = 0;
	if (h == NULL)
	{
		return (-1);
	}
	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
