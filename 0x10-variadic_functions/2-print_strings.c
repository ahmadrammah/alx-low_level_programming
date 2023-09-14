#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list x;
	char *s;
	unsigned int i;

	va_start(x, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(x, char *);
		if (s== NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (seperator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(x);
}
