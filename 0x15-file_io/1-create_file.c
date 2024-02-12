#include "main.h"
/**
 * 
 * 
 * 
*/

int create_file(const char *filename, char *text_content)
{
    int f, len;

    if (filename == NULL)
    {
        return (-1);
    }

    f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

    if (f == -1)
    {
        return (-1);
    }

    text_content = text_content == NULL ? "" : text_content;

    len = strlen(text_content);
    write(f, text_content, len);
    return (1);
}