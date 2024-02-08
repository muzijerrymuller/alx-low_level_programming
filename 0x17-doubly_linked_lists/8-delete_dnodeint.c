#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 (success), -1 (fail)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)

{
dlistint_t *current = *head;
dlistint_t *previous = NULL;
unsigned int i = 0;

if (current != NULL)
while (current->prev != NULL)
current = current->prev;

while (current != NULL)
{
if (i == index)
{
if (i == 0)
{
*head = current->next;
if (*head != NULL)
(*head)->prev = NULL;
}
else
{
previous->next = current->next;

if (current->next != NULL)
current->next->prev = previous;
}

free(current);
return (1);
}
previous = current;
current = current->next;
i++;
}

return (-1);
}
