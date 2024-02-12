#include "main.h"
/**
 * append_text_to_file - append text to an existed file
 * @filename: the name of the file
 * @text_content: content that will appent
 * Return: 1 if success, -1 if fail
*/

int append_text_to_file(const char *filename, char *text_content)
{
int f, len;

if (filename == NULL)
{
return (-1);
}

f = open(filename, O_WRONLY | O_APPEND);
if (f == -1)
{
return (-1);
}

if (text_content == NULL)
return (1);

len = strlen(text_content);
write(f, text_content, len);
return (1);
}
