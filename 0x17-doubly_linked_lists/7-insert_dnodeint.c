#include "lists.h"

/**
 * insert_dnodeint_at_index - New node at insert
 * a given position.
 * @h: list head.
 * @idx: New node index.
 * @n: New node value
 * Return: Address of new node, NULL (failed)
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)

{
dlistint_t *new = NULL;
dlistint_t *head;
unsigned int i;

if (idx == 0)
new = add_dnodeint(h, n);
else
{
head = *h;
i = 1;

if (head != NULL)
while (head->prev != NULL)
head = head->prev;

while (head != NULL)
{
if (i == idx)
{
if (head->next == NULL)
new = add_dnodeint_end(h, n);
else
{
new = malloc(sizeof(dlistint_t));
if (new != NULL)
{
new->n = n;
new->next = head->next;
new->prev = head;
head->next->prev = new;
head->next = new;
}
}
break;
}
head = head->next;
i++;
}
}
return new
}
