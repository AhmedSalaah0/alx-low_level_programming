#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a = 'a';
char b = 'A';

while (a <= 122)
{
putchar(a);
a++;
}
while (b <= 90)
{
putchar(b);
b++;
}
putchar('\n');

        return (0);
}
