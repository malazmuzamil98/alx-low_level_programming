#include "lists.h"
/**
 * add_node_end - adds node at end
 * @head: pointer
 * @str: string
 * Return: head
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ahmed, *temp;

	ahmed = malloc(sizeof(list_t));
	if (ahmed == NULL)
		return (NULL);
	ahmed->str = strdup(str);
	ahmed->len = strlen(str);
	ahmed->next = NULL;
	if (*head == NULL)
	{
		*head = ahmed;
		return (ahmed);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = ahmed;
	return (ahmed);
}
