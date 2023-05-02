#include "lists.h"
#include <stdlib.h>
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: the head of the list
 * Return: the address of the node
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *t = head, *h = head;

while (h && h->next)
{
t = t->next;
h = h->next->next;
if (t == h)
{
t = head;
while (t != h)
{
t = t->next;
h = h->next;
}
return (h);
}
}
return (NULL);
}
