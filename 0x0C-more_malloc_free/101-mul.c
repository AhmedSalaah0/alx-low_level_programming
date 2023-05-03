#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int valid(char *s);
char *mul(char *n1, char *n2);

/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of args
 * Return: 98 if fails
*/
int main(int argc, char *argv[])
{
char *res;

if (argc != 3)
{
printf("Error\n");
return (98);
}
if (!valid(argv[1]) || !valid(argv[2]))
{
printf("Error\n");
return (98);
}
res = mul(argv[1], argv[2]);
printf("%s\n", res);
free(res);
return (0);
}

/**
 * valid - func check if inputs is valid
 * @s: string which will checked
 * Return: 0 if fail
*/
int valid(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (!isdigit(s[i]))
{
return (0);
}
}
return (1);
}

/**
 * mul - func multiplay to nums
 * @n1: first num
 * @n2: second num
 * Return: result
*/
char *mul(char *n1, char *n2)
{
int l1 = strlen(n1);
int l2 = strlen(n2);
int *res = (int *)calloc(l1 + l2, sizeof(int));
int i1 = 0;
int i2 = 0;
int i;
int carry = 0, f, sum, j, d;
char *zero, *str;

for (i = l1 - 1; i >= 0; i--)
{

f = n1[i] - '0';
i2 = 0;
for (j = l2 - 1; j >= 0; j--)
{
d = n2[j] - '0';
sum = f *d + res[i1 + i2] + carry;
carry = sum / 10;
res[i1 + i2] = sum % 10;
i2++;
}
if (carry > 0)
{
res[i1 + i2] += carry;
}
i1++;
}

i = l1 + l2 - 1;
while (i >= 0 && res[i] == 0)
{
i--;
}

if (i == -1)
{
zero = (char *) malloc(2);
zero[0] = '0';
zero[1] = '\0';
free(res);
return (zero);
}

str = (char *) malloc(i + 2);
for (j = i; j >= 0; j--)
{
str[i - j] = res[j] + '0';
}
str[i + 1] = '\0';
free(res);
return (str);
}
