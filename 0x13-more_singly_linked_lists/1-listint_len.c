#include "lists.h"
#include <stdio.h>
/**
 *listint_len - func return list length
 *@h: start of list
 *Return: length of list
 */
size_t listint_len(const listint_t *h)
{
int c = 0;

while (h)
{
if (h->n)
c++;
}
return (c);
}
