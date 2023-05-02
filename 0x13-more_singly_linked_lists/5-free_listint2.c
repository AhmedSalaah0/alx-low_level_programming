#include "lists.h"
#include <stdlib.h>
/**
 *free_listint2 - function free list
 *@head: a double pointer to list head
 */
void free_listint2(listint_t **head)
{
listint_t *c;
if (head == NULL || *head == NULL)
return;
while (*head)
{
c = *head;
*head = (*head)->next;
free(c);
}
*head = NULL;
}
