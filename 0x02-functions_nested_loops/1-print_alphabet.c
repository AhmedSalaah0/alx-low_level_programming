#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
void print_alphabet()
{
char c = 'a';
while (c <= 122)
{
_putchar(c);
c++;
}
_putchar('\n');
}
int main()
{
print_alphabet();
return 0;
}
