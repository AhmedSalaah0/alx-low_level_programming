#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#define SIZE 1024
/**
 * main - entry
 * @argc: args num
 * @argv: double pointer array
 *
 * Return: 0 if true
 */
int main(int argc, char **argv)
{
int f, ft, r, w;
char buf[SIZE];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
f = open(argv[1], O_RDONLY);
if (f == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
ft = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (ft == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
while ((r = read(f, buf, SIZE)) > 0)
{
w = write(ft, buf, r);
if (w == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
if (r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}


if (close(f) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
exit(100);
}
if (close(ft) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ft);
exit(100);
}


return (0);
}
