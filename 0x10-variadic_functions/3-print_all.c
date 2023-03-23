#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - function prints all arguments of different types
 * @format: parameter representing format(datatype) of argument to be printed.
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	unsigned int i = 0;
	char *ptr;

	va_start(arg, format);

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg, int));
				break;
			case 'i':
				printf("%d", va_arg(arg, int));
				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				break;
			case 's':
				ptr =  va_arg(arg, char *);
				if (ptr == NULL)
				{
					printf("(nil)");
					break;
				}
				else
				{
					printf("%s", ptr);
					break;
				}
		}
		if (i < (strlen(format) - 1) && (format[i] == 'c'
					|| format[i] == 'i' || format[i] == 'f'
					|| format[i] == 's'))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}
