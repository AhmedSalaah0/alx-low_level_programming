#include "lists.h"
/**
 *reverse_listint - func to reverse list
 *@head: head of the list
 * Return: new head
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *p = NULL, *nxt = NULL;

while (*head)
{
	nxt = (*head)->next;
	(*head)->next = p;
	p = *head;
	*head = nxt;
}
*head = p;
return (*head);
}
