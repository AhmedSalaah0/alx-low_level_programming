#include "lists.h"
#include <stdlib.h>
/**
 * free_list - func. free all list
 * @head: first elem of the list
 */
void free_list(list_t *head)
{
list_t *t;

while (head != NULL)
{
t = head;
head = head->next;
free(t->str);
free(t);
}
}
