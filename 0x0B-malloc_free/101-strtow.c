#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_words - Counts string words
 * @str: sring
 *
 * Return: The number of words
 */
int count_words(char *str)
{
    int i, cou = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
        {
            cou++;
        }
    }

    return cou;
}

/**
 * strtow - Splits a string
 * @str: string
 *
 * Return: Array pointer
 */
char **strtow(char *str)
{
    char **w;
    int i, j, k, len, cou = 0;

    if (str == NULL || *str == '\0')
        return (NULL);

    cou = count_words(str);
    w = malloc((cou + 1) * sizeof(char *));
    if (w == NULL)
        return (NULL);

    for (i = 0, j = 0; i < cou; i++)
    {
        while (str[j] == ' ')
            j++;

        len = 0;
        while (str[j + len] != ' ' && str[j + len] != '\0')
            len++;

        w[i] = malloc((len + 1) * sizeof(char));
        if (w[i] == NULL)
        {
            for (k = 0; k < i; k++)
                free(w[k]);

            free(w);
            return (NULL);
        }

        for (k = 0; k < len; k++)
            w[i][k] = str[j + k];

        w[i][k] = '\0';
        j += len;
    }

    w[i] = NULL;

    return (w);
}
