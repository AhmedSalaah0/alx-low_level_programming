#include "main.h"
/**
 * main - copy text from file to another
 * @argc: number of arguments
 * @argv: values of arguments
 * Return: 0 if success
*/
int main(int argc, char **argv)
{
int f1, f2, d1, d2;
char content[1024];

if (argc != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
f1 = open(argv[1], O_RDONLY);
if (f1 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
}

d1 = read(f1, content, sizeof(content) - 1);

if (d1 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
}
f2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (f2 == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
d2 = write(f2, content, strlen(content));
if (d2 == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
if (close(f1) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1), exit(100);
if (close(f2) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2), exit(100);

return (0);
}
