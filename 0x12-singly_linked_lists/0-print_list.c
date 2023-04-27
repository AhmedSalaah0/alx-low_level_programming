#include "lists.h"
#include <stdio.h>
/**
 * print_list - function thar print list nodes
 * @h:head pointer
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
const list_t *curr = h;
int cou = 0;
while (curr != NULL)
{
	if (curr->str == NULL)
		printf("[0] (nil)");
	else
	{
		printf("[%u] %s\n", curr->len, curr->str);
	}
	cou++;
	curr = curr->next;
}
return (cou);
}
