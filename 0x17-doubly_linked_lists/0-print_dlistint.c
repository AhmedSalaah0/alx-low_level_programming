#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dlistint - print a list
 * @h: pointer to the head of the list
 * Return: The number of items in the list
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t i = 0;

while (h)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
