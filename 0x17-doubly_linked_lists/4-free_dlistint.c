#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees up a dlistint_tlist.
 * @head: Point to head of list.
 * Return: It returns nothing.
 **/

void free_dlistint(dlistint_t *head)
{
if (head == NULL)
return;

while (head->next)
{
head = head->next;
free(head->prev);
}
free(head);
}
