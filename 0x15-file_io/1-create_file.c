#include "main.h"
/**
 * create_file - create file with specif. permissions
 * @filename: file name
 * @text_content: content will add to the created file
 * Return: -1 if fail and 0 if success
 */
int create_file(const char *filename, char *text_content)
{
FILE *f;
size_t len, c;
int r;

if (filename == NULL)
return (-1);

f = fopen(filename, "w");

if (f == NULL)
return (-1);

len = strlen(text_content);
c = 1;

fwrite(text_content, len, c, f);

fclose(f);

r = chmod(filename, 0600);
if (r == -1)
return (-1);

return (0);
}
