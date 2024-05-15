#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - Function to return the length of a dlist
 * @h: pointer to a dlist
 * Return: the length of the list
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t len = 0;

while (h)
{
len++;
h = h->next;
}
return (len);
}
