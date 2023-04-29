#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 *add_nodeint - add new node
 *@head: pointer to the first of the list
 *@n: int
 *Return: NULL if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));

if (new == NULL)
return (NULL);

new->n = n;
new->next = *head;

*head = new;

return (new);
}
