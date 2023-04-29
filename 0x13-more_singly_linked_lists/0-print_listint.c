#include "lists.h"
#include <stdio.h>
/**
 *print_listint - func. print all list
 *@h: first of list
 *
 *Return: num of int
 */
size_t print_listint(const listint_t *h)
{
size_t c = 0;

while (h != NULL)
{
	printf("%d\n", h->n);
	h = h->next;
	c++;
}
return (c);
}
