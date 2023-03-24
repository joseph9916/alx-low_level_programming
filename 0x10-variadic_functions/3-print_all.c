#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * prints_all - Prints all strings based on the format sent
 * @format: format to be used
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i;
	long unsigned int j = 0;
	char ch;
	float f;
	char *str;

	va_start(ap, format);
	while (format[j] != '\0')
	{
		if (format[j] == 'c')
		{
			ch = va_arg(ap, int);
			printf("%c", ch);
		}
		else if (format[j] == 'i')
		{
			i = va_arg(ap, int);
			printf("%d", i);
		}
		else if (format[j] == 'f')
		{
			f = va_arg(ap, double);
			printf("%f", f);
		}
		else if (format[j] == 's')
		{
			str = va_arg(ap, char *);
			if (str != NULL)
				printf("%s", str);
			else
				printf("(nil)");
		}
		else
		{
			;
		}
		while (j < (strlen(format) - 1))
		{
			printf(", ");
			break;
		}
		j++;
		
	}
	printf("\n");
}
