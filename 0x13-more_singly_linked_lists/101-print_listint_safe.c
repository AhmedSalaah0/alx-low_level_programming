#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a list
 * @head:the head node of the list.
 *
 * Return: The number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *curr = head, *prev = NULL;
if (curr == NULL)
{
exit(98);
return (count);
}
while (curr != NULL)
{
printf("[%p] %d\n", (void *)curr, curr->n);
count++;
prev = curr;
curr = curr->next;
if (curr >= prev)
{
printf("-> [%p] %d\n", (void *)curr, curr->n);
break;
}
}

return (count);
}
