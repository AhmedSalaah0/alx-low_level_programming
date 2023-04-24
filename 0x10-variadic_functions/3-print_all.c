#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions"
/**
 *
 *
 *
 */
void print_all(const char * const format, ...)
{
va_list args;
char *s;
unsigned int i;
char c;

va_start(args, format);
i = 0;

while (format && format[i])
{
c = format[i];

switch (c)
{
	case 'c':
		printf("%c", va_arg(args, int);
		break;
	case 'i':
		printf("%d", va_arg(args, int);
		break;
	case 'f':
		printf("%f", va_arg(args, double);
		break;
	case 's':
		s = va_arg(args, char *);
		if (s == NULL)
		s = "(nil)";
		printf("%s", s);
	default:
		i++;
		continue;
		}
		if (format[i + 1])
		printf(", ");
		i++;
}

printf("\n");
va_end(args);
}
