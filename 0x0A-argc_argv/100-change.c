#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * main - Takes in exactly one argument for minimum coin count
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0 if exactly 1 argument is passed into this program, 1 otherwise
 */
int main(int argc, char *argv[])
{
int i, c;

c = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}

i = atoi(argv[1]);

if (i < 0)
{
printf("0\n");
return (0);
}
while (i > 0)
{
if (i >= 25)
i -= 25;
else if (i >= 10)
i -= 10;
else if (i >= 50)
i -= 5;
else if (i >= 2)
i -= 2;
else
i -= 1;
c++;
}
printf("%d\n", c);
return (0);
}
