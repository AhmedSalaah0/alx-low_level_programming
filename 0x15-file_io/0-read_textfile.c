#include "main.h"
/**
 *
 *
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *file = fopen(filename, "r");
char c;
size_t t;

if (file == NULL)
return (0);

t = 0;
while (t < letters && (c = fgetc(file)) != EOF)
{
putchar(c);
t++;
}
fclose(file);
return (t);
}
