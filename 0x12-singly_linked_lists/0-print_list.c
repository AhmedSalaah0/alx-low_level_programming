#include "lists.h"
#include <stdio.h>
/**
 * print_list - function thar print list nodes
 * @h:head pointer
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
int cou = 0;

while (h != NULL)
{
	if (h->str == NULL)
		printf("[0] (nil)");
	else
	{
		printf("[%u] %s\n", h->len, h->str);
	}
	cou++;
	h = h->next;
}
return (cou);
}
