#include "main.h"

/**
* function print_alphabet_x10  to ptint alphabete 10 times
*/
void  print_alphabet_x10(void)
{
int i = 0;
int l;

while (i < 10)
{
for (l = 'a'; l <= 'z'; l++)
{
_putchar(l);
}
_putchar('\n');
i++;
}
}
