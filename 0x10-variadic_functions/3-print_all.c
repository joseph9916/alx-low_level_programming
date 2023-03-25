#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - Prints all strings based on the format sent
 * @format: format to be used
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned long int j = 0;
	char *str;

	va_start(ap, format);
	while (format[j] != '\0')
	{
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					printf("(nil)");
				if (str != NULL)
					printf("%s", str);
				break;
			default:
				break;
		}
		while (j < (strlen(format) - 1) && (format[j] == 'c' || format[j] == 'i'
			|| format[j] == 'f' || format[j] == 's'))
		{
			printf(", ");
			break;
		}
		j++;
	}
	printf("\n");
	va_end(ap);
}
