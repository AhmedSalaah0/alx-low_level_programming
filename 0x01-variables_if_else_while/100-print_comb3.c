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

while(i < 9)
{
l = i+1;
while(l < 10)
{
putchar(i + '0');
putchar(l + '0'); 
if (l < 9 || i < 8)
{
putchar(',');
putchar(' ');
}
l++;
}  
i++;
}
putchar('\n');
return (0);
}
