#include "lists.h"
/**
 * list_len - claculate len
 * @h: head
 * Return: count
*/
size_t list_len(const list_t *h)
{
	int n;

	n = 0;
	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
