#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <ctype.h>
#include <strings.h>

/**
 * print_numbers - Print only numbers
 * @separator: What separates the numbers being printed like a " "
 * @n: number of arguements
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, j = 0;

	va_start(ap, n);
	if (n == 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n; i++)
	{
		if (j != 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(ap, int));
			j = 1;
	}
	printf("\n");
	va_end(ap);
}
