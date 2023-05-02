#include "lists.h"
/**
 *
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *n;
unsigned int l;

if (head == NULL)
return (NULL);

n = head;
for (l = 0; l < index; l++)
{
	if (n == NULL)
	return (NULL);
	n = n->next;
}
return (n);
}
