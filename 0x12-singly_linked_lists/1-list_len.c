#include <stdio.h>
#include "lists.h"
/**
 *list_len - func return list length
 *@h: pointer to a head of list
 *Return: list size
 */
size_t list_len(const list_t *h)
{
size_t cou = 0;

while (h)
{
cou++;
h = h->next;
}
return (cou);
}
