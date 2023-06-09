#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *pop_listint - func delete list head
 *@head: list head
 *Return: 0 if NULL
 */
int pop_listint (listint_t **head)
{
listint_t *t = *head;
int l;

if (head == NULL || *head == NULL)
return (0);

l = (*head)->n;

*head = (*head)->next;

free(t);

return (l);
}
