#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - add a node to the end of the list
 * @head: the head of the list
 * @n: the value of the node
 * Return: a pointer to the new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *node;

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;
new_node->prev = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}
node = *head;

while (node->next != NULL)
{
node = node->next;
}

node->next = new_node;
new_node->prev = node;
return (new_node);
}
