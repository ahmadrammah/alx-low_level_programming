#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - a function that prints anything.
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *sep = "", *q;
	va_list x;

	va_start(x, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(x, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(x, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(x, double));
					break;
				case 's':
					q = va_arg(x, char *);
					if (!q)
						q = "(nil)";
					printf("%s%s", sep, q);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
