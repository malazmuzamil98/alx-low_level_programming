#include "lists.h"
/**
 * add_node - adds node at begining
 * @head: pointer
 * @str: string
 * Return: head
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *ahmed;

	ahmed = malloc(sizeof(list_t));
	if (ahmed == NULL)
		return (NULL);
	ahmed->str = strdup(str);
	ahmed->len = strlen(str);
	ahmed->next = *head;
	*head = ahmed;
	return (*head);
}
