#include "main.h"

/**
* function to ptint alphabete 10 times
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
_putchar('\n');
i++;
}
}
