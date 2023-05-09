#include "main.h"
/**
 * read_textfile - func read a file and print content
 * @filename: the name of the file
 * @letters: number of letters will printed
 * Return: 0 if NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *file;
char *c;
ssize_t r, w;

if (filename == NULL)
return (0);

file = fopen(filename, "r");

if (file == NULL)
return (0);
c = malloc(letters * sizeof(char));
if (c == NULL)
{
fclose(file);
return (0);
}
r = fread(c, sizeof(char), letters, file);

if (r == -1)
{
free(c);
fclose(file);
return (0);
}
w = fwrite(c, sizeof(char), r, stdout);
if (w == -1 || w != r)
{
free(c);
fclose(file);
return (0);
}
free(c);
fclose(file);
return (w);
}
