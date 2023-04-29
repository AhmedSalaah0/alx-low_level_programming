#ifndef LISTS_H
#define LISTS_H
/**
 *struct listint_s - linked list
 *@n: int
 *@next: next node
 */
typdef struct listint_s
{
int n;
struct listint_s *next;
} listint_t;
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
#endif