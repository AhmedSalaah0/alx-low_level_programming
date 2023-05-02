#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a list
 * @h: dpuble pointer to the head of the linked list
 *
 * Return: The size of the list
 */
size_t free_listint_safe(listint_t **h)
{
size_t c = 0;
listint_t *t;

while (*h != NULL)
{
c++;
if (*h <= (*h)->next)
{
t = *h;
*h = NULL;
free(t);
break;
}
else
{
t = (*h)->next;

free(*h);

*h = t;
}
}

return (c);
}
