#include "../lists.h"
/**
 * add_node - adds node at begining
 * @head: pointer
 * @str: string
 * Return: head
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint *ahmed;

	ahmed = malloc(sizeof(listint));
	if (ahmed == NULL)
		return (NULL);
	ahmed->str = strdup(str);
	ahmed->len = strlen(str);
	ahmed->next = *head;
	*head = ahmed;
	return (*head);
}
