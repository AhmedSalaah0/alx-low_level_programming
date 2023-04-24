#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_all - print all things
 *@format: data typr
 *Return: void
 */
void print_all(const char * const format, ...)
{
va_list args;
char *s;
unsigned int i;
char c;
int iv;
float f;

va_start(args, format);
i = 0;

while (format && format[i])
{


switch (format[i])
{
	case 'c':
		c = va_arg(args, int);
		printf("%c", c);
		break;
	case 'i':
		iv = va_arg(args, int);
		printf("%d", iv);
		break;
	case 'f':
		f = va_arg(args, double);
		printf("%f", f);
		break;
	case 's':
		s = va_arg(args, char *);
		if (s)
		{
		printf("%s", s);
		break;
		}
		else
		printf("(nil)");
		break;
}
		i++;
		if (format[i])
		printf(", ");
}

printf("\n");
va_end(args);
}
