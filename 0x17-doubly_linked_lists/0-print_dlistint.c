#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a
 * dlistint_t list.
 * @h: Head of the list.
 * Return: The number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
int count = 0;

if (h == NULL)
return (count);

while (h->prev != NULL)
h = h->prev;

for (; h != NULL; h = h->next)
{
printf("%d\n", h->n);
count++;
}
return (count);
}
