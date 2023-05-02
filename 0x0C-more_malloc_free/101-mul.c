#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _isdigit(char c);
void print_error(void);
char *mul(char *n1, char *n2);

/**
 * main - multiplies two numbers
 * @argc: the number of arguments
 * @argv: pointers to the arguments
 *
 * Return: 0 if successful
 */
int main(int argc, char **argv)
{
char *res;

if (argc != 3)
{
print_error();
return (98);
}

if (!mul(argv[1], "1") || !mul(argv[2], "1"))
{
print_error();
return (98);
}

res = mul(argv[1], argv[2]);
if (!res)
{
print_error();
return (98);
}

printf("%s\n", res);

free(res);

return (0);
}

/**
 * _isdigit - checks if digit
 * @c: the character will be checked
 *
 * Return: 1 if c is a digit
 */
int _isdigit(char c)
{
return (c >= '0' && c <= '9');
}

/**
 * print_error - prints Error
 *
 * Return: void
 */
void print_error(void)
{
fprintf(stderr, "Error\n");
}

/**
 * mul - multiplies two numbers
 * @n1: first number
 * @n2: second number
 *
 * Return: a string containing the product of the two numbers
 */
char *mul(char *n1, char *n2)
{
int l1 = 0, l2 = 0, i, j, k, c;
char *res;

while (n1[l1])
l1++;

while (n2[l2])
l2++;

if (l1 == 0 || l2 == 0)
{
return (NULL);
}

res = calloc(l1 + l2 + 1, sizeof(char));
if (!res)
return (NULL);

for (i = l1 - 1; i >= 0; i--)
{
if (!_isdigit(n1[i]))
{
free(res);
return (NULL);
}
c = 0;
for (j = l2 - 1, k = i + l2; j >= 0; j--, k--)
{
if (!_isdigit(n2[j]))
{
free(res);
return (NULL);
}
c += (n1[i] - '0') * (n2[j] - '0') + res[k];
res[k] = c % 10;
c /= 10;
}
res[i + j + 1] = c;
}

while (*res == 0 && *(res + 1))
res++;

return (res);
}
