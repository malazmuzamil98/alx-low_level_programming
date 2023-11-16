#include "lists.h"
/**
 * print_list - prints all elements
 * @h: head
 * Return: count
*/
size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			n++;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			n++;
		}
		h = h->next;
	}

	return (n);
}
