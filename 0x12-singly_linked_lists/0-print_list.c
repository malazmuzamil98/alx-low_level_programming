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
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	n++;

	return (n);
}
