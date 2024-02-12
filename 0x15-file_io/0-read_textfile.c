#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * @filename: name of the file
 * @letters: size
 * Return: 0 if error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int len,f, writ;
char *t;

t = malloc(letters);
if (t == NULL || filename == NULL)
return (0);

f = open(filename, O_RDONLY);
if (f == -1)
{
free(t);
return (0);
}
len = read(f, t, letters);
writ = write(STDOUT_FILENO, t, len);
close(f);
return (writ);
}