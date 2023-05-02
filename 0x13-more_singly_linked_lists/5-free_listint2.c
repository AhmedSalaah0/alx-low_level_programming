#include "lists.h"
#include <stdlib.h>
/**
 *
 *
 *
 */
void free_listint2(listint_t **head)
{
listint_t *c;

while (*head)
{
c = *head;
*head = (*head)->next;
free(c);
}
*head = NULL;
}
