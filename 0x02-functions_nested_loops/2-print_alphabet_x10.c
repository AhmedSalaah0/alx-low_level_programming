#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
void  print_alphabet_x10()
{
int i = 0;
int l;

while (i < 10)
{
for (l = 'a'; l <= 'z'; l++)
{
_putchar(l);
}
i++;
}
}
