#include <stdio.h>

void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i += 2) 
printf("%s", str[i]);
putchar('\n');
}
