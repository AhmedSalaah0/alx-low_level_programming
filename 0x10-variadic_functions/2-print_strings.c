#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_strings - print each string then separator
 *@separator:seprator prints afrer each string
 *@n: number of args
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *s;

va_start(args, n);

for (i = 0; i < n; i++)
{
s = va_arg(args, char *);

if (s == NULL)
printf("(nil)");
else
printf("%s", s);
if (separator != NULL && i != n - 1)
printf("%s", separator);
}
va_end(args);

printf("\n");
}
