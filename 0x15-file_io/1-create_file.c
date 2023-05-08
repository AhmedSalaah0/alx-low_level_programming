#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - func. creare a file
 * @filename: file name
 * @text_content: file content
 * Return: -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
int f;
ssize_t l, w;

if (filename == NULL)
return (-1);

f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

if (f == -1)
return (-1);

if (text_content)
{
l = 0;
while (text_content[l] != '\0')
l++;

w = write(f, text_content, l);
if (w != l)
{
close(f);
return (-1);
}
}

close(f);
return (1);
}

