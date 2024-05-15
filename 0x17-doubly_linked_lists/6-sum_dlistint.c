#include "lists.h"
/**
 * sum_dlistint - function returns the sum of the list
 * @head: the head of the list
 * Return: the sum of the list
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
