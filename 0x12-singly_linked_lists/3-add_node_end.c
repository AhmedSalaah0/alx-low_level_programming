#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_node_end - add new node to list end
 *@head:first list elem.
 *@str: new elem. will added
 *Return: NULL if strint is Null or fail otherwise New Node
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *New, *Now;

if (str == NULL)
return (NULL);

New = malloc(sizeof(list_t));

if (New == NULL)
return (NULL);

New->len = strlen(str);
New->str = strdup(str);
New->next = NULL;

if (*head == NULL)
	*head = New;
else
{
	Now = *head;

	while (Now->next != NULL)
	Now = Now->next;
	Now->next = New;
}
return (New);
}
