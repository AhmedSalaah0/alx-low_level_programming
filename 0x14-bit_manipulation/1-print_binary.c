#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - convert dec to bin
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
int i, k;
int print_flag = 0;

if (n == 0) {
printf("0");
return;
}
for (i = 31; i >= 0; i--)
{
k = n >> i;
if (k & 1 || print_flag)
{
printf("%d", (k & 1));
print_flag = 1;
}
}
}

