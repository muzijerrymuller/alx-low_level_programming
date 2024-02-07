#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: pointer to head of the list
 * Return: nothing
 **/

void free_dlistint(dlistint_t *head);
{
if (head == NULL)
return;

while (head->next)
{
dlistint_t *temp = head;
head = head->next;
free(temp);
}
free(head);
}
