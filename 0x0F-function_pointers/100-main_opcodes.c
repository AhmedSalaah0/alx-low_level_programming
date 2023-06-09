#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - function
 * @address: address of var
 * @nbytes: bytes num
 * Return: 1, 2 or 0
 */
void print_opcodes(char *address, int nbytes)
{
int i;

for (i = 0; i < nbytes; i++)
{
printf("%02hhx", address[i]);
if (i != nbytes - 1)
printf(" ");
}

printf("\n");
}
/**
 * main - main function
 *@argc: number of arg.
 *@argv: 2D array
 *Return: 1
 */
int main(int argc, char **argv)
{
int nbytes;

if (argc != 2)
{
printf("Error\n");
return (1);
}

nbytes = atoi(argv[1]);
if (nbytes <= 0)
{
printf("Error\n");
return (2);
}

print_opcodes((char *)main, nbytes);

return (0);
}
