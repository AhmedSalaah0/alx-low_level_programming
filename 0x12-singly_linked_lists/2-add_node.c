#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *add_node - add elem. to list begin
 *@head: list start
 *@str: new elem.
 *Return: Null if str is Null otherwise New Node
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *NewNode;

if (str == NULL)
return (NULL);

NewNode = malloc(sizeof(list_t));

if (NewNode == NULL)
return (NULL);

NewNode->str = strdup(str);
if (NewNode->str == NULL)
{
free(NewNode);
return (NULL);
}
NewNode->len = strlen(str);
NewNode->next = *head;

*head = NewNode;

return (NewNode);
}
