#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 0;
char l = 'a';

while (a < 16)
{
if (a < 10)
{
putchar(48 + a);
a++;
}
else{
putchar(l);
l++;
a++;
}
}
putchar('\n');
return (0);
}
