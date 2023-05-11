#include "main.h"
/**
 * append_text_to_file - func. append new text to file
 * @filename: name of file which will added text to
 * @text_content: text will append
 * Return: -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
int f, len, bw;

if (filename == NULL)
return (-1);
f = open(filename, O_WRONLY | O_APPEND);
if (f == -1)
return (-1);
if (text_content == NULL)
{
close(f);
return (1);
}
for (len = 0; text_content[len]; len++)
;
bw = write(f, text_content, len);
if (bw == -1 || bw != len)
{
close(f);
return (-1);
}
close(f);
return (1);
}
