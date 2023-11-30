#include "../lists.h"
/**
 * list_len - claculate len
 * @h: head
 * Return: count
*/
size_t listint_len(const listint_t *h)
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
