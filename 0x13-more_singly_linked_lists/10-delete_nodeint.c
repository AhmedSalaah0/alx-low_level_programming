#include "lists.h"
#include <stdlib.h>
/**
 *delete_nodeint_at_index - delete an index in list
 *@head: double pointer to list
 *@index: index will deleted
 *Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *t, *p;
unsigned int i;

if (*head == NULL)
return (-1);
if (index == 0)
{
t = *head;
*head = (*head)->next;
free(t);
return (1);
}
p = *head;

for (i = 0; p && i < index - 1; i++)
p = p->next;

if (p == NULL || p->next == NULL)
return (-1);

t = p->next;
p->next = t->next;
free(t);
return (1);
}
