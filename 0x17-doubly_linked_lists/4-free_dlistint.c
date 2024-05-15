#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dlistint - free a list
 * @head: the head of the list
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *node = head;
while (node != NULL)
{
dlistint_t *temp = node;
node = node->next;
free(temp);
}
}
