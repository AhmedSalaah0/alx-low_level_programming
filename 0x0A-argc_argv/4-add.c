#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - main function
 * @argc: number of commands
 * @argv: array
 * Return: if no arguments return 0
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0, l;
	char *p;


	if (argc < 2)
	printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			p = argv[i];
			l = strlen(p);

			for (j = 0; j < l; j++)
			{
				if (isdigit(*(p + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[i]);
		}

	}
	printf("%d\n", sum);
	return (0);
}
