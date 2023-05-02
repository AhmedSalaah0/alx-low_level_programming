#include "lists.h"
/**
 * insert_nodeint_at_index - func. insert new node
 * @head: start of the list
 * @idx: place of insert
 * @n: inserted number
 * Return: inserted val
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new = (listint_t *)malloc(sizeof(listint_t)), *c ;
unsigned int i;

if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;

if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
c = *head;
for (i = 0; i < idx - 1 && c != NULL; i++)
{
c = c->next;
}

if (c == NULL)
{
free(new);
return (NULL);
}

new->next = c->next;
c->next = new;

return (new);
}
