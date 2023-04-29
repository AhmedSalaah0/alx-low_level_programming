#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_all - print all things
 *@format: data typr
 */
void print_all(const char * const format, ...)
{
va_list args;
int i = 0;
char *s, *sp = "";
va_start(args, format);

if (format)
{
while (format[i])
{
switch (format[i])
{
	case 'c':
		printf("%s%c", sp, va_arg(args, int));
		break;
	case 'i':
		printf("%s%d", sp, va_arg(args, int));
		break;
	case 'f':
		printf("%s%f", sp, va_arg(args, double));
		break;
	case 's':
		s = va_arg(args, char *);
		if (!s)
		s = "(nil)";

		printf("%s%s", sp, s)
		break;
	default:
		i++;
		continue;
}

		sp = ", ";
		i++;
}
}
printf("\n");
va_end(args);
}
