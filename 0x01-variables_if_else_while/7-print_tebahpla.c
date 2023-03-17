#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a = 'z';

while (a >= 97)
{
putchar(a);
a--;
}
putchar('\n');
return (0);
}
