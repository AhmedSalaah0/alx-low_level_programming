#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int _putchar(char c);
int main()
{
char *c = ("_putchar");

while (*c)
{
_putchar(*c);
c++;
}
_putchar('\n');

return (0);
}
