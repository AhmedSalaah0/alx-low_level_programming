#include "main.h"
/**
 * is_phelp - func help in know prime
 * @i: variable for check if n is divisable by any num
 * @n: number which checked
 * Return: 1 if prime 0 otherwise
 */
int is_phelp(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0)
return (0);
return (is_phelp(n, i - 1));
}
/**
 * is_prime_number - function check if number is prime
 * @n: number which checked
 * Return: 1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
if (n < 2)
return (0);
return (is_phelp(n, n - 1));
}
