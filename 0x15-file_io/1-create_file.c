#include "main.h"
/**
 * create_file - create file with specif. permissions
 * @filename: file name
 * @text_content: content will add to the created file
 * Return: -1 if fail and 0 if success
 */
int create_file(const char *filename, char *text_content)
{
int f;
size_t len;
int r;

if (filename == NULL)
return (-1);

f = open(filename,O_CREAT | O_WRONLY | O_TRUNC,  "w");

if (f == -1)
return (-1);

if (text_content == NULL)
text_content = "";

len = strlen(text_content);

r = write(f, text_content, len);
if (r == -1)
return (-1);

close(f);

return (1);
}
