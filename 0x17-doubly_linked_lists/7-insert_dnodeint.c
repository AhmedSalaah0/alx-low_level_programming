#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - insert a node at index
 * @h: pointer to head of list
 * @idx: index of node to insert
 * @n: value to insert
 * Return: address of new node or NULL if failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *node;
dlistint_t *tmp = *h;
unsigned int i = 0;

node = malloc(sizeof(dlistint_t));
if (node == NULL)
return (NULL);
node->n = n;

if (idx == 0)
{
node->prev = NULL;
node->next = *h;
if (*h != NULL)
{
(*h)->prev = node;
}
*h = node;
return (node);
}

while (tmp != NULL)
{
if (i == idx - 1)
{
node->prev = tmp;
node->next = tmp->next;
if (tmp->next != NULL)
tmp->next->prev = node;

tmp->next = node;
return (node);
}
tmp = tmp->next;
i++;
}

free(node);
return (NULL);
}
