#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - function that prints a linked list
 * @head: the start of the linked list
 *
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *s = head;
	const listint_t *f = head;
	size_t c = 0;

	if (head == NULL)
		exit(98);

	while (s && f && f->next)
	{
		s = s->next;
		f = f->next->next;
		c++;
		if (s == f)
		{
			printf("-> [%p] %d\n", (void *)f, f->n);
			return (c);
		}
	}

	s = head;
	while (s)
	{
		printf("[%p] %d\n", (void *)s, s->n);
		s = s->next;
		c++;
	}
	return (c);
}

