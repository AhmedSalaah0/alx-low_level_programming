#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * get_dnodeint_at_index - get a node at a given index
 * @head: the head of the list
 * @index: the index of the node
 * Return: the Node at the given index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *node = head;
unsigned int i = 0;
while (node)
{
if (i == index)
return (node);
node = node->next;
i++;
}
return (NULL);
}
