#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i = 0;
int l;
int s;
while (i < 8)
{
l = i+1;
while (l < 9)
{
s = l+1;
while (s < 10)
{
putchar(i + '0');
putchar(l + '0');
putchar(s + '0');
if (i < 7 || l < 8 || s < 9)
{
putchar(',');
putchar(' ');
}
s++;
}
l++;
}
i++;
}
putchar('\n');
return (0);
}

