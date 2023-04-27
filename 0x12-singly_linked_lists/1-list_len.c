#include <stdio.h>
#include "lists.h"
/**
 *
 *
 *
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
