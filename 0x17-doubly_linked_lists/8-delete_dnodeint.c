#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *parser;
    dlistint_t *saver;
    unsigned int i;

    if (*head != NULL)
    {
        while (*head->prev != NULL)
            *head = *head->prev;
    }
    parser = *head;
    for (i = 0; i <= index; i++)
    {
        if (parser->next != NULL)
        {
            parser = parser->next;
        }
        else
            return (-1);
    }
    saver = parser->next;
    if (saver != NULL)

}
