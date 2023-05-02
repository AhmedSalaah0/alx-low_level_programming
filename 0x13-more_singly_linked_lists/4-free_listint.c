#include "lists.h"
#include <stdlib.h>
/**
 *free_listint - function to free list
 *@head:pointer to the first elem. in the list
 */
void free_listint(listint_t *head)
{
listint_t *f;

while (head)
{
f = head;
head = head->next;
free(f);
}
}
